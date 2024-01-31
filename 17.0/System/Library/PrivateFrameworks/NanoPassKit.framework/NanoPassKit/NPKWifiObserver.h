@class NSObject;
@protocol NPKWiFiObserverDelegate, OS_dispatch_queue;

@interface NPKWifiObserver : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Atomic BOOL _wiFiEnabled;
}

@property (weak, nonatomic) id<NPKWiFiObserverDelegate> delegate;

- (BOOL)isWifiEnabled;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0;
- (void)_setupInterface;
- (void)_updateWiFiStateAndNotifiyObserver:(BOOL)a0;

@end
