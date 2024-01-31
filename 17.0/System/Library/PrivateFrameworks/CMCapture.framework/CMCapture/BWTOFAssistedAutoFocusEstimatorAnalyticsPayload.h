@class NSString, NSDictionary;

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (retain, nonatomic) NSDictionary *estimatorResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (id)eventDictionary;
- (void)reset;
- (void)dealloc;

@end
