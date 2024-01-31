@class FBSSystemService;

@interface BKSSystemService : NSObject {
    FBSSystemService *_fbsSystemService;
}

- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (id)init;
- (void)terminateApplication:(id)a0 forReason:(int)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void)cleanupClientPort:(unsigned int)a0;
- (BOOL)canOpenApplication:(id)a0 reason:(int *)a1;
- (id)systemApplicationBundleIdentifier;
- (int)pidForApplication:(id)a0;
- (void).cxx_destruct;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (unsigned int)createClientPort;

@end
