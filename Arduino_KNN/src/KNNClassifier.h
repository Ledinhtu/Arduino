
#ifndef _KNN_CLASSIFIER_H_
#define _KNN_CLASSIFIER_H_

#include <Arduino.h>

class KNNNode;

class KNNClassifier {
public:
  KNNClassifier(int inputLength);
  virtual ~KNNClassifier();

  void addData(const float input[], int class_);
  int classify(const float input[], int k = 3);

  float confidence();

private:
  int _inputLength;
  KNNNode* _dataset;

  float _confidence;
};

class KNNRegressor;

#endif
