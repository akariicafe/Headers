@class NSString, NSMutableArray, NSMutableDictionary;

@interface WBSASCLockupViewGenerator : NSObject <ASCLockupViewDelegate> {
    id /* block */ _pendingGenerateLockupViewsCompletionHandler;
    NSMutableArray *_lockupViewsPendingLoad;
    NSMutableArray *_succesfullyLoadedLockupViews;
    NSMutableDictionary *_lockupRequestToRequiredTeamIDMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGenerator;
+ (id)lockupViewGroup;

- (void).cxx_destruct;
- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)lockupViewDidBeginRequest:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_allLockupViewRequestsCompleted;
- (void)_lockupViewRequestedCompleted:(id)a0 loadedSuccessfully:(BOOL)a1;
- (void)generateLockupViewsForAvailableApps:(id)a0 completionHandler:(id /* block */)a1;

@end
