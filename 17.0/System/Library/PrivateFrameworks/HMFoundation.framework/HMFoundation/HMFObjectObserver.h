@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void)_startObserving;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_stopObserving;
- (id)initWithObservedObject:(id)a0;

@end
