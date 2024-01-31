@class MDMServerCore, NSObject;
@protocol OS_dispatch_queue;

@interface MDMServerAppInstallBlocking : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appBlockQueue;
@property (copy, nonatomic) id /* block */ appBlockCompletionBlock;
@property (weak, nonatomic) MDMServerCore *server;

- (id)init;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)didUnblockAppInstalls;
- (BOOL)isAppInstallBlocked;

@end
