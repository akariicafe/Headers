@interface TCObjectDetectorTrainerDarknetYOLOOptions : NSObject

@property (nonatomic) long long maxIterations;
@property (nonatomic) long long batchSize;
@property (nonatomic) long long numClasses;
@property (nonatomic) long long outputHeight;
@property (nonatomic) long long outputWidth;
@property (nonatomic) long long randomSeed;

- (struct Config { int x0; int x1; int x2; int x3; int x4; })config;
- (id)init;

@end
