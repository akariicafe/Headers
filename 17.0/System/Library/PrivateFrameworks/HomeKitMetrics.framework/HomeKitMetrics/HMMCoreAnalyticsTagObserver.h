@class NSString;
@protocol HMMCoreAnalyticsLogEventFactory, HMMLogEventSubmitting, HMMTagDispatching;

@interface HMMCoreAnalyticsTagObserver : NSObject <HMFLogging, HMMTagObserving>

@property (readonly) id<HMMTagDispatching> tagDispatcher;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) id<HMMCoreAnalyticsLogEventFactory> logEventFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (void)unconfigure;
- (id)initWithTagDispatcher:(id)a0 logEventSubmitter:(id)a1 logEventFactory:(id)a2;
- (void)observeTaggedEvent:(id)a0 addProcessorBlock:(id /* block */)a1;

@end
