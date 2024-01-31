@class NSString, NSDictionary;

@interface _GCHIDEventSubject : NSObject <_GCHIDEventSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_handlersByService;
    _Atomic BOOL _stopped;
}

@property (getter=isStopped) BOOL stopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)observeHIDEvents:(id /* block */)a0;
- (id)observeHIDEvents:(id /* block */)a0 forService:(id)a1;
- (void).cxx_destruct;
- (void)publishHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
