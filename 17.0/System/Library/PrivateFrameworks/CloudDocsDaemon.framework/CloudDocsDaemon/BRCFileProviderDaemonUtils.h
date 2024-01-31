@interface BRCFileProviderDaemonUtils : NSObject {
    BOOL _inSyncBubble;
    BOOL _isFPFS;
}

- (id)initWithSyncBubble:(BOOL)a0 isFPFS:(BOOL)a1;
- (BOOL)waitForFPToBeReadyToAcceptXPCWithError:(id *)a0;

@end
