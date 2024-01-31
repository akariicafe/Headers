@class RBSProcessHandle, RBSAssertion, NSObject;
@protocol OS_dispatch_queue, PPLPeopleAppLauncherDelegate;

@interface PPLPeopleAppLauncher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RBSProcessHandle *peopleAppProcessHandle;
@property (retain, nonatomic) RBSAssertion *initializationAssertion;
@property (weak, nonatomic) id<PPLPeopleAppLauncherDelegate> delegate;

+ (id)sharedLauncher;

- (id)init;
- (void).cxx_destruct;
- (void)launchPeopleAppIfNeededWithForegroundPriority:(BOOL)a0;

@end
