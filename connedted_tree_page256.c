#include <stdio.h>
#include <stdlib.h>
#define datatype int
//이진 트리 노드 구조 정의
typedef struct tnode{
    struct tnode *left;
    datatype data;
    struct tnode *right;
}tnode;

//tnode라는 구조체를 만들고 기본적인 트리구조를 위한
//구성을 만들어준다.


//이진 트리의 헤드 노드 구조 정의
typedef struct linkedBT{
    tnode *root;
}linkedBT;

//트리의 정보를 읽기위한 헤드노드를 정해준다.

//트리 초기화
void init_BT(tnode **root){
    *root = NULL;
}

//처음 트리의 주소를 NULL값으로 초기화를 시켜준다.

//트리 항목들을 출력
void print_BT(tnode *root){
    //순회 알고리즘 사용
}

//이곳에 우리가 배웠던 전위, 중위, 후위 순회 알고리즘을 사용하여
//순회 탐색을 이용한다.

//child를 노드 root의 왼쪽 서브트리로 설정
void set_left(tnode *root, tnode *child){
    if(root->left){
        printf("왼쪽 서브트리가 이미 존재합니다.\n");
        exit(1);
    }
    else root->left = child;
}

//child라는 노드를 root노드의 왼쪽 자식 노드로 설정한다.

//chiild를 노드 root의 오른쪽 서브트리로 설정
void set_right(tnode *root, tnode *child){
    if(root->right){
        printf("오른쪽 서브트리가 이미 존재합니다.\n");
        exit(1);
    }
    else root->right = child;
}

//child라는 노드를 root노드의 오른쪽 자식 노드로 설정한다.

//단말 노드인지 판단
int is_leaf(tnode *node){
    return !node->left && !node->right;
}

//노드의 왼쪽 자식노드가 있으면 true값을 가질텐데 그것을 부정하니 false가되고
//오른쪽도 마찬가지로 판단한다.
//둘다 false라면 그 루트노드의 자식노드는 없는 것이다. 즉, 단말노드임을 알 수 있다.

//노드의 데이터를 반환
datatype get_data(tnode *node){
    if(!node){
        printf("NULL노드이므로 데이터를 반환할 수 없습니다.\n");
        exit(1);
    }
    else return node->data;
}

//노드가 없다면, 즉 널값을 따라서 와서 없는 위치라면 안내문을 출력하고
//있다면 그 노드의 데이터값을 출력한다.

//노드의 부모 노드를 반환
tnode *get_parent(tnode *node){
    //부모 노드를 가리키는 필드를 추가하여 구현
}


//노드의 왼쪽 자식 노드를 반환
tnode *get_left(tnode *node){
    return node->left;
}

//노드의 왼쪽 자식노드값을 반환한다.

//노드의 오른쪽 자식 노드를 반환
tnode *get_right(tnode *node){
    return node->right;
}

//노드의 오른쪽 자식노드값을 반환한다.

int main(void){
    linkedBT lBT1, lBT2;
    tnode *node1 = (tnode *)malloc(sizeof(tnode));
    tnode *node2 = (tnode *)malloc(sizeof(tnode));
    tnode *node3 = (tnode *)malloc(sizeof(tnode));
    //헤드노드 2개 1BT1, 1BT2를 생성하고
    //노드 3개를 동적할당하여 생성한다.

    tnode *l, *r;
    //포인터 구조체 *l과 *r을 생성한다.

    node1->data = 10;
    node1->left = node1->right = NULL;
    node2->data = 20;
    node2->left = node2->right = NULL;
    node3->data = 30;
    node3->left = node3->right = NULL;
    //동적할당하여 만든 노드 3개들에 각각 정보를 저장하고
    //전부 단말노드로 만들기 위해 왼쪽과 오른쪽에 NULL값을 넣어준다.

    init_BT(&(lBT1.root));
    lBT1.root = node1;
    init_BT(&(lBT2.root));
    lBT2.root = node2;
    //lBT1과 lBT2를 초기화하고
    //헤드노드를 각각 node1과 node2의 주소를 갖게한다.

    set_left(lBT1.root, node3);
    //lBT1이 가리키는 node1에 node3을 왼쪽노드로 추가한다.
    set_right(lBT1.root, lBT2.root);
    ////lBT1이 가리키는 node1에 lBT2가 가리키는 node2을 오른쪽노드로 추가한다.
    init_BT(&(lBT2.root));
    //lBT2를 초기화한다.
    printf("%d\n",get_data(lBT1.root));
    //lBT1이 가리키는 node1의 데이터를 읽는다.
    l = get_left(lBT1.root);
    //l에 lBT1이 가리키는 node1의 왼쪽 자식노드 node3의 주소를 넣는다.
    r = get_right(lBT1.root);
    //r에 lBT1이 가리키는 node1의 오른쪽 자식노드 node2의 주소를 넣는다.
    printf("%d ",get_data(l));
    printf("%d\n",get_data(r));
    //각각 l과 r값을 출력한다.
    if(is_leaf(l)){
        printf("단말 노드입니다.\n");
    }
    if(is_leaf(r)){
        printf("단말 노드입니다.\n");
    }
    //만약 l과 r이 단말노드라면 if문을 실행한다.
    //node2와 node3는 단말노드이므로 해당 문장이 출력된다.
    printf("%d\n",get_data(lBT2.root));
    //lBT2의 데이터를 읽ㄴ느다 lBT2는 초기화하여 NULL노드이니
    //안내문이 출력될 것이다.
}

