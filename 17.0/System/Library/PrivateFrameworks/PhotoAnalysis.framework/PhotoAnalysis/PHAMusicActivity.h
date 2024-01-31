@class NSArray, NSString, PGManager, NSObject;
@protocol OS_dispatch_queue, PHAActivityDelegate, OS_xpc_object;

@interface PHAMusicActivity : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivity>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSArray *musicJobs;
@property (readonly, nonatomic) id<PHAActivityDelegate> delegate;
@property (readonly, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL doneRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregister;
+ (id)tasks;

- (id)init;
- (void)readShouldDefer:(BOOL *)a0 doneRequested:(BOOL *)a1;
- (void)haltWithState:(long long)a0;
- (void)startActivity;
- (BOOL)haltIfNeeded;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)registerActivityWithDelegate:(id)a0;
- (void)onDidScheduleAllJobs;
- (void).cxx_destruct;
- (void)scheduleNextJob;
- (BOOL)jobCanContinue;

@end
