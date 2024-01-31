@class NSObject;
@protocol OS_dispatch_queue;

@interface HDSFileTransfer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)destDirectoryForTargetId:(id)a0;
+ (id)tmpRapportDir;

- (void)invalidate:(id /* block */)a0;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)sideloadFilesForTargetId:(id)a0 pathToDirectory:(id)a1 withCompletion:(id /* block */)a2;
- (void)waitForFilesWithTargetId:(id)a0 withCompletion:(id /* block */)a1;

@end
