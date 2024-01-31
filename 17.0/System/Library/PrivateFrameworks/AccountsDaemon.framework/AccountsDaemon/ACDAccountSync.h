@class NSTimer, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)accountSyncPropertiesForAccount:(id)a0;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)sharedAccountSyncServer;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)checkCircleState;
- (void)setupAccountSync;

@end
