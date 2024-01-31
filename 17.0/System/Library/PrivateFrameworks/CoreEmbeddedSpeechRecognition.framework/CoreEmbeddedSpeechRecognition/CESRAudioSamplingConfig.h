@class NSArray;

@interface CESRAudioSamplingConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *samplingPolicies;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getSamplingRateFromDimension:(id)a0;
- (id)initWithConfigPath:(id)a0;

@end
