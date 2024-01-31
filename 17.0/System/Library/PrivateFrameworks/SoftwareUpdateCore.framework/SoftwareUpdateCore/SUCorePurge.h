@interface SUCorePurge : NSObject

+ (void)_trackPurgeEnd:(id)a0;
+ (void)_trackPurgeBegin:(id)a0;
+ (void)_trackPurgeBegin:(id)a0 withIdentifier:(id)a1;
+ (void)_trackPurgeEnd:(id)a0 withIdentifier:(id)a1;
+ (void)_trackPurgeEnd:(id)a0 withIdentifier:(id)a1 withResult:(long long)a2 withError:(id)a3;
+ (void)_trackPurgeEnd:(id)a0 withResult:(long long)a1 withError:(id)a2;
+ (void)checkForAssetsOfType:(id)a0 completion:(id /* block */)a1;
+ (void)checkForAssetsOfType:(id)a0 withCompletionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)checkForExistingAssetsWithPolicy:(id)a0 completion:(id /* block */)a1;
+ (void)checkForExistingAssetsWithPolicy:(id)a0 withCompletionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)checkForExistingPrepare:(id /* block */)a0;
+ (void)checkForExistingPrepareWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
+ (void)previousUpdateState:(BOOL *)a0 tetheredRestore:(BOOL *)a1 failedBackward:(BOOL *)a2 failedForward:(BOOL *)a3;
+ (void)removeAllAssetsOfType:(id)a0 completion:(id /* block */)a1;
+ (void)removeAllAssetsOfType:(id)a0 withCompletionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)removeAllAssetsOfTypes:(id)a0 completion:(id /* block */)a1;
+ (void)removeAllAssetsOfTypes:(id)a0 withCompletionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)removeAllUpdateContent:(id /* block */)a0;
+ (void)removeAllUpdateContentWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
+ (void)removeAllUpdateContentWithPolicy:(id)a0 completion:(id /* block */)a1;
+ (void)removeAllUpdateContentWithPolicy:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
