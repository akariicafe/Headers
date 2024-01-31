@class FINode;

@interface FINodeObserver : NSObject {
    FINode *_observedNode;
    struct OpaqueEventNotifier { } *_notifier;
}

+ (id)propertyName:(unsigned int)a0;
+ (id)observerForFINode:(id)a0 withObserver:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startObserving:(unsigned int)a0;
- (id)debugDescription;
- (void)stopObserving:(unsigned int)a0;

@end
