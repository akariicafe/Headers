@class WBSRemotePlistController;

@interface WBSOfflineSearchRemoteDisablementManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

@property (class, readonly, nonatomic) WBSOfflineSearchRemoteDisablementManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)areOfflineSearchSuggestionsDisabled:(id /* block */)a0;

@end
