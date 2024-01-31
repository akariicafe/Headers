@interface CMWalkingSteadinessClassificationManager : NSObject

+ (id)classificationDataFromStruct:(struct CLWalkingSteadinessClassificationData { double x0; double x1; double x2; int x3; })a0;
+ (BOOL)classificationForScore:(double)a0 classification:(long long *)a1;
+ (BOOL)isWalkingSteadinessAvailable;
+ (int)mapClassificationTypeFromFrameworkToClassifier:(long long)a0;
+ (double)maximumScoreForClassification:(long long)a0;
+ (double)minimumScoreForClassification:(long long)a0;

@end
