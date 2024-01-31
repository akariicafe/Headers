@class NSString;

@interface HMDCoreAnalyticsLogEventFactory : NSObject <HMFLogging, HMMCoreAnalyticsLogEventFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logEventForTaggedEvent:(id)a0;
- (id)supportedTags;

@end
