@class NSString, NSHashTable;
@protocol HMMCoreAnalyticsLogEventObserverDelegate;

@interface HMMCoreAnalyticsLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, weak, nonatomic) id<HMMCoreAnalyticsLogEventObserverDelegate> delegate;
@property (readonly, nonatomic) NSHashTable *filters;
@property (readonly, nonatomic) id /* block */ submissionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addAccessoryDetailsForLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addErrorDetailsForLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addHomeSummaryForLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)compareOptionsToOptionalMethods:(id)a0;
- (id)dictionaryFromEvent:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (BOOL)filterAcceptsEvent:(id)a0;
- (id)initWithDelegate:(id)a0 filters:(id)a1;
- (id)initWithDelegate:(id)a0 filters:(id)a1 submissionBlock:(id /* block */)a2;

@end
