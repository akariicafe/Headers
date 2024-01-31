@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _UISceneOpenItemProvidersDataTransferSessionManager : NSObject <_UISceneOpenItemProvidersDataTransferSessionDelegate>

@property (retain, nonatomic) NSMutableSet *sessions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addSession:(id)a0;
- (void)dataTransferSessionBeganTransfers:(id)a0;
- (void)dataTransferSessionFinishedTransfers:(id)a0;

@end
