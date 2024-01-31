@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;

@end
