@class NSUUID, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDAppleMediaAccessoriesStateManagerMetricsDispatcher : HMFObject <HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (void)submitMatchingIdentifierEventWithMatchingCount:(long long)a0;
- (void)submitMatchingIdentifierRemovalEventWithRemovalCount:(long long)a0;

@end
