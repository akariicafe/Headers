@class NSArray, CPAnalytics, NSString;

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination>

@property (readonly, weak, nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (readonly, nonatomic) NSArray *allStandardProperties;
@property (readonly, nonatomic) NSArray *allMediaProperties;
@property (readonly, nonatomic) NSArray *allErrorProperties;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (id)buildCoreAnalyticsEventPayloadWithProperties:(id)a0 fromSourceEvent:(id)a1 intoTargetEventPayload:(id)a2;
- (BOOL)isMediaEvent:(id)a0;
- (void)reportMalformedEvent:(id)a0 malformationDescriptionWithFormat:(id)a1;
- (void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)a0 fromSourceEvent:(id)a1 payload:(id)a2;

@end
