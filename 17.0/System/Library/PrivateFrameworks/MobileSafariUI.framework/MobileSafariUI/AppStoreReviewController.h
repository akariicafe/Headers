@class NSObject, AMSSharedStoreReview;
@protocol OS_dispatch_queue;

@interface AppStoreReviewController : NSObject {
    AMSSharedStoreReview *_sharedStoreReview;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)_setupSharedStoreReviewIfNeeded;
- (void)applicationDidEnterForeground;
- (void)showAppReviewPromptInSceneIfNeeded:(id)a0;

@end
