@class NSString, NSMutableArray, NSHashTable;
@protocol BLSBacklightProxy;

@interface BLSPendingBacklightProxy : NSObject <BLSBacklightProxy> {
    NSMutableArray *_requests;
    NSHashTable *_observers;
    id<BLSBacklightProxy> _replacementBacklightProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _backlightState;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)performChangeRequest:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)replaceWithBacklightProxy:(id)a0;

@end
