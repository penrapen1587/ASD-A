#include <iostream>
using namespace std;

typedef struct node *alamatnode;
typedef struct node {
    char INFO;
    alamatnode RIGHT;
    alamatnode LEFT;
} NODE;

typedef struct {
    NODE* root;
} TREE;

void BuatTree(char C, TREE *T) {
    NODE *Baru;
    Baru = new NODE;
    Baru->INFO = C;
    Baru->RIGHT = NULL;
    Baru->LEFT = NULL;
    (*T).root = Baru;
}

void TambahKanan(char C, NODE *root) {
    if(root->RIGHT == NULL) {
        NODE *Baru;
        Baru = new NODE;
        Baru->INFO = C;
        Baru->RIGHT = NULL;
        Baru->LEFT = NULL;
        root->RIGHT = Baru;
    }
    else
        cout << "Sub Tree Kanan telah diisi" << endl;
}

void TambahKiri(char C, NODE *root) {
    if(root->LEFT == NULL) {
        NODE *Baru;
        Baru = new NODE;
        Baru->INFO = C;
        Baru->RIGHT = NULL;
        Baru->LEFT = NULL;
        root->LEFT = Baru;
    }
    else
        cout << "Sub Tree Kiri telah diisi" << endl;
}


bool isEqual(NODE *root1, NODE *root2) {
    bool Hasil = true;
    if((root1 == NULL) && (root2 != NULL)) {
        if(root1->INFO == root2->INFO) {
            Hasil = false;
        }
        else {
            isEqual(root1->LEFT, root2->LEFT);
            isEqual(root1->RIGHT, root2->RIGHT);
        }
    }
    else {
        if((root1 != NULL) || (root2 != NULL)) {
            Hasil = false;
        }
    }
    return Hasil;
}
void CetakTreePreOrder(NODE *root) {
    if(root != NULL) {
        cout << root->INFO << " " << endl;
        CetakTreePreOrder(root->LEFT);
        CetakTreePreOrder(root->RIGHT);
    }
}

void HapusAll(NODE *root) {
    if(root != NULL) {
        HapusAll(root->LEFT);
        HapusAll(root->RIGHT);
        delete root;
    }
}

void HapusKanan(NODE *root) {
    if(root != NULL) {
        if(root->RIGHT != NULL) {
            HapusAll(root->RIGHT);
            root->RIGHT = NULL;
        }
    }
}

void HapusKiri(NODE *root) {
    if(root != NULL) {
        if(root->LEFT != NULL) {
            HapusAll(root->LEFT);
            root->LEFT = NULL;
        }
    }
}


int main() {
    TREE T;
    TREE T2;
    T2.root = NULL;

    BuatTree('X', &T);
    TambahKiri('Y', T.root);
    TambahKanan('Z', T.root);    
	BuatTree('X', &T2);
    TambahKiri('Y', T2.root);
    TambahKanan('Z', T2.root);
   
   cout << "TREE 1"<< endl;
    CetakTreePreOrder(T.root);
	cout << " TREE 2"<< endl;
    CetakTreePreOrder(T2.root);
    cout << endl;
	
    if(isEqual(T.root, T2.root) != 1) {
        cout << " TREE yang sama" << endl;
    }
    else {
        cout << " TREE yang tidak sama" << endl;
    }
	
	cout << endl; 
	TambahKiri('W', T.root->LEFT);
   cout << "TREE 1"<< endl;
    CetakTreePreOrder(T.root);
	cout << " TREE 2"<< endl;
    CetakTreePreOrder(T2.root);
    cout << endl;
	
    if(isEqual(T.root, T2.root) == 1) {
        cout << " TREE yang sama" << endl;
    }
    else {
        cout << " TREE yang tidak sama" << endl;
    }
	
    return 0;
}