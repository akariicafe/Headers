@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ENUserAlert : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _dismissed;
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userRLS;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSString *titleParameter;
@property (copy, nonatomic) NSString *subTitleKey;
@property (copy, nonatomic) NSObject *subTitleParameter;
@property (copy, nonatomic) NSString *defaultButtonTitleKey;
@property (copy, nonatomic) NSString *alternativeButtonTitleKey;
@property (nonatomic) BOOL showOnLockScreen;
@property (nonatomic) double timeoutSeconds;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_autoInvalidate;
- (void)_responseCallback:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;
- (void)_activateWithCompletionHandler:(id /* block */)a0;

@end
