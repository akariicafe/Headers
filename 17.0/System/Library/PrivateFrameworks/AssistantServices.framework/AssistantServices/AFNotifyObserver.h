@class NSString, NSObject;
@protocol OS_dispatch_queue, AFNotifyObserverDelegate;

@interface AFNotifyObserver : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _options;
    id<AFNotifyObserverDelegate> _delegate;
    int _registrationToken;
    struct _flags { unsigned char delegateRespondsToDidReceiveNotificationWithToken : 1; unsigned char delegateRespondsToDidChangeStateFromTo : 1; } _flags;
    unsigned long long _state;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getStateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 queue:(id)a2 delegate:(id)a3;
- (void)_invalidate;
- (void)invalidate;
- (void)_handleNotificationWithToken:(int)a0;
- (void).cxx_destruct;
- (void)_updateStateWithToken:(int)a0;

@end
