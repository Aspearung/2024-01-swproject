#include <stdio.h>
#include <stdlib.h>
#define datatype int
//���� Ʈ�� ��� ���� ����
typedef struct tnode{
    struct tnode *left;
    datatype data;
    struct tnode *right;
}tnode;

//tnode��� ����ü�� ����� �⺻���� Ʈ�������� ����
//������ ������ش�.


//���� Ʈ���� ��� ��� ���� ����
typedef struct linkedBT{
    tnode *root;
}linkedBT;

//Ʈ���� ������ �б����� ����带 �����ش�.

//Ʈ�� �ʱ�ȭ
void init_BT(tnode **root){
    *root = NULL;
}

//ó�� Ʈ���� �ּҸ� NULL������ �ʱ�ȭ�� �����ش�.

//Ʈ�� �׸���� ���
void print_BT(tnode *root){
    //��ȸ �˰��� ���
}

//�̰��� �츮�� ����� ����, ����, ���� ��ȸ �˰����� ����Ͽ�
//��ȸ Ž���� �̿��Ѵ�.

//child�� ��� root�� ���� ����Ʈ���� ����
void set_left(tnode *root, tnode *child){
    if(root->left){
        printf("���� ����Ʈ���� �̹� �����մϴ�.\n");
        exit(1);
    }
    else root->left = child;
}

//child��� ��带 root����� ���� �ڽ� ���� �����Ѵ�.

//chiild�� ��� root�� ������ ����Ʈ���� ����
void set_right(tnode *root, tnode *child){
    if(root->right){
        printf("������ ����Ʈ���� �̹� �����մϴ�.\n");
        exit(1);
    }
    else root->right = child;
}

//child��� ��带 root����� ������ �ڽ� ���� �����Ѵ�.

//�ܸ� ������� �Ǵ�
int is_leaf(tnode *node){
    return !node->left && !node->right;
}

//����� ���� �ڽĳ�尡 ������ true���� �����ٵ� �װ��� �����ϴ� false���ǰ�
//�����ʵ� ���������� �Ǵ��Ѵ�.
//�Ѵ� false��� �� ��Ʈ����� �ڽĳ��� ���� ���̴�. ��, �ܸ�������� �� �� �ִ�.

//����� �����͸� ��ȯ
datatype get_data(tnode *node){
    if(!node){
        printf("NULL����̹Ƿ� �����͸� ��ȯ�� �� �����ϴ�.\n");
        exit(1);
    }
    else return node->data;
}

//��尡 ���ٸ�, �� �ΰ��� ���� �ͼ� ���� ��ġ��� �ȳ����� ����ϰ�
//�ִٸ� �� ����� �����Ͱ��� ����Ѵ�.

//����� �θ� ��带 ��ȯ
tnode *get_parent(tnode *node){
    //�θ� ��带 ����Ű�� �ʵ带 �߰��Ͽ� ����
}


//����� ���� �ڽ� ��带 ��ȯ
tnode *get_left(tnode *node){
    return node->left;
}

//����� ���� �ڽĳ�尪�� ��ȯ�Ѵ�.

//����� ������ �ڽ� ��带 ��ȯ
tnode *get_right(tnode *node){
    return node->right;
}

//����� ������ �ڽĳ�尪�� ��ȯ�Ѵ�.

int main(void){
    linkedBT lBT1, lBT2;
    tnode *node1 = (tnode *)malloc(sizeof(tnode));
    tnode *node2 = (tnode *)malloc(sizeof(tnode));
    tnode *node3 = (tnode *)malloc(sizeof(tnode));
    //����� 2�� 1BT1, 1BT2�� �����ϰ�
    //��� 3���� �����Ҵ��Ͽ� �����Ѵ�.

    tnode *l, *r;
    //������ ����ü *l�� *r�� �����Ѵ�.

    node1->data = 10;
    node1->left = node1->right = NULL;
    node2->data = 20;
    node2->left = node2->right = NULL;
    node3->data = 30;
    node3->left = node3->right = NULL;
    //�����Ҵ��Ͽ� ���� ��� 3���鿡 ���� ������ �����ϰ�
    //���� �ܸ����� ����� ���� ���ʰ� �����ʿ� NULL���� �־��ش�.

    init_BT(&(lBT1.root));
    lBT1.root = node1;
    init_BT(&(lBT2.root));
    lBT2.root = node2;
    //lBT1�� lBT2�� �ʱ�ȭ�ϰ�
    //����带 ���� node1�� node2�� �ּҸ� �����Ѵ�.

    set_left(lBT1.root, node3);
    //lBT1�� ����Ű�� node1�� node3�� ���ʳ��� �߰��Ѵ�.
    set_right(lBT1.root, lBT2.root);
    ////lBT1�� ����Ű�� node1�� lBT2�� ����Ű�� node2�� �����ʳ��� �߰��Ѵ�.
    init_BT(&(lBT2.root));
    //lBT2�� �ʱ�ȭ�Ѵ�.
    printf("%d\n",get_data(lBT1.root));
    //lBT1�� ����Ű�� node1�� �����͸� �д´�.
    l = get_left(lBT1.root);
    //l�� lBT1�� ����Ű�� node1�� ���� �ڽĳ�� node3�� �ּҸ� �ִ´�.
    r = get_right(lBT1.root);
    //r�� lBT1�� ����Ű�� node1�� ������ �ڽĳ�� node2�� �ּҸ� �ִ´�.
    printf("%d ",get_data(l));
    printf("%d\n",get_data(r));
    //���� l�� r���� ����Ѵ�.
    if(is_leaf(l)){
        printf("�ܸ� ����Դϴ�.\n");
    }
    if(is_leaf(r)){
        printf("�ܸ� ����Դϴ�.\n");
    }
    //���� l�� r�� �ܸ������ if���� �����Ѵ�.
    //node2�� node3�� �ܸ�����̹Ƿ� �ش� ������ ��µȴ�.
    printf("%d\n",get_data(lBT2.root));
    //lBT2�� �����͸� �Ф����� lBT2�� �ʱ�ȭ�Ͽ� NULL����̴�
    //�ȳ����� ��µ� ���̴�.
}

