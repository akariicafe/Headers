@class NSDictionary, NSError;

@interface SCMLImageModelThresholds : NSObject

@property (retain, nonatomic) NSDictionary *_thresholdDict;
@property (retain, nonatomic) NSError *_loadError;

+ (id)instance;
+ (id)_createThresholdDictionaryWithError:(id *)a0;
+ (id)_validateScoreThresholdsJson:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (double)thresholdForLabel:(id)a0 classificationMode:(unsigned long long)a1 modelVersion:(id)a2 error:(id *)a3;

@end
