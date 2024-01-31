@interface STDeviceUnlockStateListener : NSObject {
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ lockStateChangeHandler;
@property (readonly, nonatomic) BOOL deviceIsLocked;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
