@class NSString, AMSStoreReviewGatingController, AMSBagKeySet, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSSharedStoreReview : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue;
@property (retain, nonatomic) AMSStoreReviewGatingController *storeReviewGatingController;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isGroupedLogicSupported;
+ (id)createBagForSubProfile;
+ (BOOL)_isRepeatedPromptsSupported;
+ (void)_applicationDidForegroundWithCurrentTime:(id)a0 storeReviewMetrics:(id)a1 sessionInterval:(long long)a2;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 sessionCount:(long long)a1;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 currentTime:(id)a1 sessionCount:(long long)a2 promptInterval:(long long)a3;
+ (BOOL)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)a0 currentTime:(id)a1 sessionInterval:(long long)a2;
+ (void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (void)_persistStoreReviewMetrics:(id)a0;
+ (id)_storeReviewMetrics;
+ (void)_logNewSessionWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;

- (id)initWithBag:(id)a0;
- (BOOL)shouldAttemptPromptReview;
- (void)didAttemptPromptReview;
- (void)applicationDidForeground;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)isReviewEnabled;
- (id)shouldAttemptReview;

@end
