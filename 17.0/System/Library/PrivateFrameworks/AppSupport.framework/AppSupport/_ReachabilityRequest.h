@class NSString, NSLock;

@interface _ReachabilityRequest : NSObject {
    NSLock *_lock;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _flags;
    struct __CFDictionary { } *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property (readonly, nonatomic) NSString *hostname;

- (BOOL)hasObservers;
- (id)initWithHostname:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)reachabilityChangedWithFlags:(unsigned int)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (id)description;

@end
