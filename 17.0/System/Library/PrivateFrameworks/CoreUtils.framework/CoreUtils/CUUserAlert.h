@class NSString, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface CUUserAlert : NSObject <CUActivatable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _dismissed;
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userRLS;
}

@property (retain, nonatomic) NSBundle *localizationBundle;
@property (copy, nonatomic) NSString *localizationTableName;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSString *titleParameter;
@property (copy, nonatomic) NSString *subtitleKey;
@property (copy, nonatomic) NSString *subtitleParameter;
@property (copy, nonatomic) NSString *defaultButtonTitleKey;
@property (copy, nonatomic) NSString *alternativeButtonTitleKey;
@property (nonatomic) double timeoutSeconds;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidated;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_autoInvalidate;
- (void)_responseCallback:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;

@end
