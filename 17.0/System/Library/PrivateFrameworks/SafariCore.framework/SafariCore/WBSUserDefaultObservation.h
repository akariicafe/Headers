@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation> {
    NSUserDefaults *_defaults;
    id /* block */ _handler;
    NSString *_key;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 key:(id)a1 queue:(id)a2 notifyForInitialValue:(BOOL)a3 handler:(id /* block */)a4;

@end
