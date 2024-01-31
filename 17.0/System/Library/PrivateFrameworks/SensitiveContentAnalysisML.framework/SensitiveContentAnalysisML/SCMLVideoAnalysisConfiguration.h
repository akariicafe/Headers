@class NSNumber, NSString;

@interface SCMLVideoAnalysisConfiguration : SCMLAnalysisConfiguration

@property (readonly, nonatomic) unsigned long long framesPerSync;
@property (readonly, nonatomic) NSNumber *frameLimit;
@property (readonly, nonatomic) unsigned long long sensitiveFrameCountThreshold;
@property (readonly, nonatomic) BOOL useUniformSampling;
@property (readonly, nonatomic) NSString *debugFramesOutputPathPrefix;

+ (id)defaultConfig;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)initWithOptions:(id)a0 framesPerSync:(unsigned long long)a1 frameLimit:(id)a2 sensitiveFrameCountThreshold:(unsigned long long)a3 useUniformSampling:(BOOL)a4;

@end
