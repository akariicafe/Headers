@class NSString, TFDataAggregator, TFFeedbackFormViewController, TFFeedbackDataContainer, NSURL, ASDBetaAppLaunchInfo;
@protocol TFFeedbackSubmissionService, TFFeedbackSessionDelegate;

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate>

@property (readonly, copy, nonatomic) NSString *logKey;
@property (nonatomic) BOOL didSnapshot;
@property (nonatomic, getter=isWaitingOnAggregatorForSubmission) BOOL waitingOnAggregatorForSubmission;
@property (nonatomic) unsigned long long currentPhase;
@property (readonly, nonatomic) TFFeedbackDataContainer *dataContainer;
@property (readonly, nonatomic) TFDataAggregator *aggregator;
@property (readonly, nonatomic) id<TFFeedbackSubmissionService> submissionService;
@property (weak, nonatomic) TFFeedbackFormViewController *activeFormViewController;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) ASDBetaAppLaunchInfo *launchInfo;
@property (weak, nonatomic) id<TFFeedbackSessionDelegate> delegate;
@property (nonatomic) BOOL forcePrefilledEmailViewVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_developerName;
- (void)commonInitWithContext:(unsigned long long)a0;
- (void)associateEmail:(id)a0;
- (void)_abortFeedbackSubmissionForViewController:(id)a0 withError:(id)a1;
- (id)_associatePrefilledEmailIfNeeded;
- (void)_beginFeedbackSubmisionForViewController:(id)a0;
- (id)_currentContextStringDescription;
- (id)_displayableErrorMessageFromService:(id)a0 submissionError:(id)a1;
- (void)_finishFeedbackSubmissionForViewController:(id)a0;
- (id)_generateFormForCurrentState;
- (void)associateComments:(id)a0;
- (void)associateIncidentId:(id)a0;
- (void)associateScreenshotImages:(id)a0;
- (void)cancelFeedbackForActiveFormViewController;
- (id)createFeedbackViewControllerForCurrentState;
- (void)dataAggregator:(id)a0 didCompleteTasks:(id)a1;
- (id)initForContext:(unsigned long long)a0 betaApplicationBundleURL:(id)a1;
- (id)initForContext:(unsigned long long)a0 betaApplicationIdentifier:(id)a1;
- (id)initForContext:(unsigned long long)a0 betaApplicationLoadableBundleURL:(id)a1;
- (id)initForContext:(unsigned long long)a0 withTestingWithLaunchInfo:(id)a1;
- (id)initWithBetaApplicationIdentifier:(id)a0;
- (void)initiateFeedbackSnapshot;
- (void)submitCrashFeedback;
- (void)submitFeedbackForActiveFormViewController;

@end
