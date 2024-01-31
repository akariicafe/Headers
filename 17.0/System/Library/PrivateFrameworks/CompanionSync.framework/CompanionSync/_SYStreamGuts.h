@class NSError, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface _SYStreamGuts : NSObject {
    struct __CFRunLoopSource { } *_runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
    id<NSStreamDelegate> _delegate;
    NSError *_error;
    unsigned long long _status;
    NSMutableDictionary *_propertyStore;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)storeProperty:(id)a0 forKey:(id)a1;
- (void)createRunloopSourceForStream:(id)a0;
- (void)postStreamEvent:(unsigned long long)a0 forStream:(id)a1;
- (void)setEventHandler:(id /* block */)a0 queue:(id)a1;

@end
