@class NSArray;

@interface CRFormPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

+ (void)enumerateAllFieldsInFields:(id)a0 block:(id /* block */)a1;
+ (void)enumerateContourBasedDetectedFields:(id)a0 block:(id /* block */)a1;
+ (void)enumerateDetectedFields:(id)a0 block:(id /* block */)a1;
+ (void)enumerateExternalFields:(id)a0 block:(id /* block */)a1;
+ (void)enumerateFieldsInFields:(id)a0 filter:(id /* block */)a1 block:(id /* block */)a2;
+ (void)enumerateTextBasedDetectedFields:(id)a0 block:(id /* block */)a1;
+ (void)logFieldStatistics:(id)a0;
+ (id)postProcessingManagerWithDefaultSequence;

- (id)initWithSequence:(id)a0;
- (void).cxx_destruct;
- (id)initWithStep:(id)a0;
- (id)process:(id)a0 document:(id)a1 options:(id)a2;
- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
