
#include "Aux.h"

int main(int argc, char const *argv[]) {
    LInt list1, list2;
    int opcao, len, num, num1, num2, resp, x, y;
    printf("Insere o numero correspondente ao exercicio: ");
    scanf("%d",&opcao);
    switch (opcao) {
        case 1:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            num = length(list1);
            printf("Comprimento da lista: %d",num);
            break;
        case 2:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            printf("Comprimento da lista: %d\n",length(list1));
            freeL(list1);
            printLInt(list1);
            printf("Comprimento da lista: %d\n",length(list1));
            break;
        case 3:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            imprimeL(list1);
            break;
        case 4:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            list1 = reverseL(list1);
            printLInt(list1);
            break;
        case 5:
            printf("Comprimento da lista ordenada: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Elemento a inserir: ");
            scanf("%d",&num);
            printLInt(list1);
            insertOrd(&list1,num);
            printLInt(list1);
            break;
        case 6:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Elemento a remover: ");
            scanf("%d",&num);
            printLInt(list1);
            if(!removeOneOrd(&list1,num)) printLInt(list1);
            else printf("Elemento não encontrado!");
            break;
        case 7:
            printf("Comprimento da lista ordenada 1: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Comprimento da lista ordenada 2: ");
            scanf("%d",&len);
            list2 = getLInt(len);
            LInt* merged = malloc(sizeof(struct lligada));
            merge(merged,list1,list2);
            printLInt(*merged);
            break;
        case 8:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Valor para dividir: ");
            scanf("%d",&num);
            LInt *menores = malloc(sizeof(struct lligada));
            LInt *maiores = malloc(sizeof(struct lligada));
            splitQS(list1,num,menores,maiores);
            printf("Menores: ");
            printLInt(*menores);
            printf("Maiores: ");
            printLInt(*maiores);
            break;
        case 9:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            LInt metade = parteAmeio(&list1);
            printLInt(metade);
            printLInt(list1);
            break;
        case 10:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Elemento a remover: ");
            scanf("%d",&num);
            printLInt(list1);
            resp = removeAll(&list1,num);
            printLInt(list1);
            printf("%d elementos removidos.\n",resp);
            break;
        case 11:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            resp = removeDups(&list1);
            printLInt(list1);
            printf("%d elementos removidos.\n",resp);
            break;
        case 12:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            resp = removeMaiorL(&list1);
            printLInt(list1);
            printf("Maior elemento: %d\n",resp);
            break;
        case 13:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            init(&list1);
            printLInt(list1);
            break;
        case 14:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            printf("Elemento a inserir: ");
            scanf("%d",&num);
            appendL(&list1,num);
            printLInt(list1);
            break;
        case 15:
            printf("Comprimento da lista 1: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printf("Comprimento da lista 2: ");
            scanf("%d",&len);
            list2 = getLInt(len);
            printLInt(list1);
            printLInt(list2);
            concatL(&list1,list2);
            printLInt(list1);
            break;
        case 16:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            printf("Endereço: %d\n", list1);
            list2 = cloneL(list1);
            printLInt(list2);
            printf("Endereço: %d\n", list2);
            break;
        case 17:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            printf("Endereço: %d\n", list1);
            list2 = cloneRev(list1);
            printLInt(list2);
            printf("Endereço: %d\n", list2);
            break;
        case 18:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            resp = maximo(list1);
            printf("Máximo: %d", resp);
            break;
        case 19:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            printf("Numero de elementos a manter: ");
            scanf("%d",&num);
            resp = take(num,&list1);
            printLInt(list1);
            printf("Comprimento final da lista: %d", resp);
            break;
        case 21:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLIntCirc(len);
            printf("Numero de elementos a avancar: ");
            scanf("%d",&num);
            list2 = Nforward(list1, num);
            printf("Elemento inicial: %d\nElemento %d posições à frente: %d\n", list1->valor, num, list2->valor);
            break;
        case 25:
            printf("Comprimento da lista ordenada: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            remreps(list1);
            printLInt(list1);
            break;
        case 26:
            printf("Comprimento da lista ordenada: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            list2 = rotateL(list1);
            printLInt(list2);
            break;
        case 27:
            printf("Comprimento da lista: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            printLInt(list1);
            list2 = parte(list1);
            printLInt(list1);
            printLInt(list2);
            break;
        case 31: {
            ABin tree = getBTree();
            list1 = NULL;
            inorder(tree,&list1);
            printLInt(list1);
            break; }
        case 32: {
            ABin tree = getBTree();
            list1 = NULL;
            preorder(tree,&list1);
            printLInt(list1);
            break; }
        case 33:{
            ABin tree = getBTree();
            list1 = NULL;
            posorder(tree, &list1);
            printLInt(list1);
            break; }
        case 34:{
            ABin tree = getBTree();
            printf("Escolha um elemento que pertença ou não há tree:");
            scanf("%d", &num);
            int prof = depth(tree,num);
            printf("Profundidade de %d é %d", num, prof);
            break; }
        case 35: {
            ABin tree = getBTree();
            int nodos = freeAB(tree);
            printf("Na tree foram libertados %d nodos", nodos);
            break; }
        case 36: {
            ABin tree = getBTree();
            printf("Escolha um nivel para fazer prune");
            scanf("%d", &num);
            int nodos = pruneAB(&tree, num);
            printf("Nodos retirados: %d", nodos);
            break; }
        case 37: {
            ABin tree = getBTree();
            ABin tree2 = getBTree();
            int iguais = iguaisAB(tree, tree2);
            printf("Arvores tree e tree2 %s", iguais ? "são iguais" : "são diferentes");
            break; }
        case 38: {
            ABin tree = getBTree();
            printf("Escolha de nivel");
            scanf("%d", &num);
            LInt r = nivelL(tree, num);
            printLInt(r);
            break; }
        case 39: {
            ABin tree = getBTree();
            printf("Escolha de nivel");
            scanf("%d", &num);
            int *v;
            nivelV(tree, num, v);
            for(int i = 0; v[i]; i++)
                printf("%d ", v[i]);
            break; }
        case 40: {
            ABin tree = getBTree();
            printf("Array Size");
            scanf("%d", &num);
            int v[num];
            int preenchidos = dumpAbin(tree, v, num);
            for(int i = 0; i < preenchidos ; i++)
                printf("%d ", v[i]);
            break; }
        case 41: {
            ABin tree = getBTree();
            ABin ac = somasAcA(tree);
            LInt r = NULL;
            inorder(tree, &r);
            printLInt(r);
            break; }
        case 42: {
            ABin tree = getBTree();
            int folhas = contaFolhas(tree);
            printf("Tree tem %d folhas", folhas);
            break; }
        case 43: {
             ABin tree = getBTree();
             ABin mirror = cloneMirror(mirror);
             LInt ini = NULL, mii = NULL;
             inorder(tree, &ini);
             inorder(mirror, &mii);
             printLInt(ini);
             printLInt(mii);
             break; }
        case 44: {
            ABin tree = getBTree();
            printf("Elemento a adicionar");
            scanf("%d", &num);
            int aux = addOrd(tree, num);
            printf("Elemento %d %s", num, aux ? "já existe em tree" : "adicionado a tree");
            break; }
        case 45: {
            ABin tree = getBTree();
            printf("Elemento a procurar");
            scanf("%d", &num);
            int aux = lookupAB(tree, num);
            printf("Elemento %d %s", num, aux ? "existe em tree" : "não existe em tree");
            break; }
        case 46: {
            ABin tree = getBTree();
            printf("Elemento a procurar");
            scanf("%d", &num);
            int aux = depthOrd(tree, num);
            printf("Elemento %d %s %d" , num, (aux == -1) ? "não se encontre em tree" : "encontra-se no nivel", aux);
            break; }
        case 47: {
            ABin tree = getBTree();
            int maior = maiorAB(tree);
            printf("%d é o maior da tree", maior);
            break; }
        case 48: {
            ABin tree = getBTree();
            LInt r = NULL;
            inorder(tree, &r);
            printLInt(r);
            removeMaiorA(&tree);
            LInt pr = NULL;
            inorder(tree, &pr);
            printLInt(pr);
            break; }
        case 49: {
            ABin tree = getBTree();
            printf("Elemento da árvore");
            scanf("%d", &num);
            int nodos = quantosMaiores(tree, num);
            printf("Na tree existem %d nodos maiores que %d", nodos, num);
            break; }
        case 50: {
            printf("Comprimento da lista ordenada: ");
            scanf("%d",&len);
            list1 = getLInt(len);
            ABin r;
            listToBTree(list1, &r);
            break;    
        }
        case 51: {
            ABin tree = getBTree();
            int aux = deProcura(tree);
            printf("tree %s arvore de procura", aux ? "é uma" : "não é uma");
            break;}
    }
    printf("\n");
    return 0;
}