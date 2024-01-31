@class NSMutableDictionary;

@interface HMMTRHAPAccessoryInfo : HMFObject

@property (retain, nonatomic) NSMutableDictionary *accessoryInfoDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)attributeDescriptions;
- (id)serviceDescriptionsForEndpoint:(id)a0;
- (id)accessoryInfoForEndpoint:(id)a0;
- (id)categoriesForEndpoint:(id)a0;
- (id)fixedLabelsForEndpoint:(id)a0;
- (id)nameForEndpoint:(id)a0;
- (id)partsListForEndpoint:(id)a0;
- (void)setAccessoryInfo:(id)a0 forEndpoint:(id)a1;

@end
