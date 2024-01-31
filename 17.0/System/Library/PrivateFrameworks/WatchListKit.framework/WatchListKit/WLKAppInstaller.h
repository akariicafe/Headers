@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppInstaller : NSObject {
    NSObject<OS_dispatch_queue> *_installQueue;
    NSMutableSet *_installSessions;
}

+ (id)defaultAppInstaller;

- (id)init;
- (void).cxx_destruct;
- (void)installAppForInstallable:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)installAppForInstallable:(id)a0 sceneIdentifier:(id)a1 offer:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)installAppForInstallable:(id)a0 sceneIdentifier:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;

@end
