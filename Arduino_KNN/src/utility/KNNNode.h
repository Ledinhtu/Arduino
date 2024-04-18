#ifndef __KNN_NODE_H
#define __KNN_NODE_H

class KNNNode {
public:
    KNNNode(const float values[], int numValues, int class_);
    virtual ~KNNNode();    

    float distance(const float values[], int numValues) const;

    int class_() const;

    KNNNode* next() const;

    void setNext(KNNNode* next);

private:
    float _value;
    int _class;
    KNNNode * _next;
}

#endif /*__KNN_NODE_H*/
