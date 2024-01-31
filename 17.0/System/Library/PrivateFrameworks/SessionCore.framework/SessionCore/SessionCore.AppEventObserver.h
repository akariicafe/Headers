@interface SessionCore.AppEventObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ _removedPublisher;
    void /* unknown type, empty encoding */ _addedPublisher;
    void /* unknown type, empty encoding */ applicationWorkspace;
}

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
