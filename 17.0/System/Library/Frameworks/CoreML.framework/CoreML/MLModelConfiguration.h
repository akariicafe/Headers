@class NSDictionary, NSURL, NSString;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL allowBackgroundGPUComputeSetting;
@property (nonatomic) long long predictionConcurrencyHint;
@property BOOL trainWithMLCompute;
@property (nonatomic) BOOL useWatchSPIForScribble;
@property (nonatomic) BOOL allowFloat16AccumulationOnGPU;
@property BOOL allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) BOOL allowBackgroundGPUCompute;
@property (retain, nonatomic) id<MTLDevice> preferredMTLDevice;
@property (retain, nonatomic) id<MTLDevice> preferredMetalDevice;
@property (nonatomic) BOOL enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (retain) NSURL *rootModelURL;
@property (nonatomic) long long profilingOptions;
@property (nonatomic) BOOL usePreloadedKey;
@property (retain, nonatomic) NSString *parentModelName;
@property (nonatomic) BOOL allowsInstrumentation;
@property (nonatomic) BOOL preparesLazily;
@property (nonatomic) long long experimentalMLE5EngineUsage;
@property (copy) NSString *modelDisplayName;
@property long long computeUnits;

+ (id)defaultConfiguration;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)computeUnitsToString:(long long)a0;
- (id)experimentalMLE5EngineUsageToString:(long long)a0;
- (id)initWithComputeUnits:(long long)a0;
- (BOOL)isEqualToModelConfiguration:(id)a0;

@end
