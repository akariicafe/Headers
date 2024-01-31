@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {
    NSLock *_lock;
}

@property BOOL sessionPrompt;

+ (id)coordinator;

- (void)dealloc;
- (id)_init;
- (void)lock;
- (void)unlock;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)didPrompt;
- (void)markPrompt;

@end
