@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {
    FBSOrientationObserver *mObserver;
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)a0;
- (void)interfaceOrientationWithCompletion:(id /* block */)a0;
- (id /* block */)makeUpdateHandler;
- (void)updateInterfaceOrientationWithBSOrientation:(long long)a0;
- (void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)a0;
- (void)updateInterfaceOrientationWithNotification:(id)a0;

@end
