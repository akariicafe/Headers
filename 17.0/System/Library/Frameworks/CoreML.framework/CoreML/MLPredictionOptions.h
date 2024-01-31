@class NSDictionary, NSArray, MLPredictionSyncPoint;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long parentSignpostID;
@property unsigned long long classifyTopK;
@property (readonly, nonatomic) BOOL predictionUsesCPU;
@property (copy, nonatomic) NSDictionary *automaticOutputBackingMode;
@property unsigned long long maxComputationBatchSize;
@property (nonatomic) BOOL enablePixelBufferDirectBinding;
@property (copy, nonatomic) NSArray *waitSyncPoints;
@property (retain, nonatomic) MLPredictionSyncPoint *completionSyncPoint;
@property (nonatomic) BOOL usesCPUOnly;
@property (copy, nonatomic) NSDictionary *outputBackings;

+ (id)defaultOptions;

- (id)init;
- (id)initWithUsesCPUOnly:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
