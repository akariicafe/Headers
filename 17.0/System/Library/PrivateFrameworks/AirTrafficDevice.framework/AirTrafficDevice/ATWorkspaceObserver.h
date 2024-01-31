@class NSObject;
@protocol LSApplicationWorkspaceObserverProtocol, ATWorkspaceObserverDelegate;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<ATWorkspaceObserverDelegate> *delegate;

- (void)startObserving;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationInstallsDidChange:(id)a0;
- (void)stopObserving;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (void)applicationInstallsDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)applicationInstallsDidPrioritize:(id)a0;

@end
