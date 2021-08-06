def printKDistance(node,k):
    if node==None:
        return
    if k==0:
        print(node.data)
    else:
        printKDistance(node.left,k-1)
        printKDistance(node.right,k-1)
        