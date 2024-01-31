@class NSString;
@protocol HMMSiriSELFAnalyticsStream;

@interface HMMSiriSELFLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, nonatomic) id<HMMSiriSELFAnalyticsStream> siriAnalyticsStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithSiriAnalyticsStream:(id)a0 logEventDispatcher:(id)a1;

@end
