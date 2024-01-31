@class NSString, ACUISActivityMetricsRequest, NSData, ACUISActivitySceneMetrics, ACActivityDescriptor;

@interface ACUISActivitySceneDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSData *activityDescriptorData;
@property (nonatomic) BOOL useFallbackMetrics;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) long long activitySceneType;
@property (readonly, copy, nonatomic) ACActivityDescriptor *activityDescriptor;
@property (readonly, nonatomic) ACUISActivityMetricsRequest *metricsRequest;
@property (readonly, nonatomic) ACUISActivitySceneMetrics *metrics;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_activitySceneDescriptor;
- (id)initWithActivityDescriptor:(id)a0 payloadIdentifier:(id)a1 activitySceneType:(long long)a2 metricsRequest:(id)a3;
- (id)initWithActivitySceneDescriptor:(id)a0 acActivityDescriptor:(id)a1;

@end
