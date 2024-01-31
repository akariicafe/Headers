@class BSServiceConnection;
@protocol BSServiceConnectionClient, UIKeyboardUIServiceProtocol;

@interface UIKeyboardUIClient : NSObject {
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    id<UIKeyboardUIServiceProtocol> _remoteTarget;
}

+ (id)sharedInstance;
+ (id)serviceInterface;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_initConnectionIfNeeded;
- (void)setKeyboardAlpha:(double)a0 force:(BOOL)a1;
- (id)snapshotViewForOptions:(unsigned long long)a0;

@end
