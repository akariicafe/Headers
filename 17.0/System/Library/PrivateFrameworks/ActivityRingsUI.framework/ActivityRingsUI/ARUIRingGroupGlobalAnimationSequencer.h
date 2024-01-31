@class NSString, ARUIObserverStore, CADisplayLink;

@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    ARUIObserverStore *_observers;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_updateDisplayLink;
- (void)_displayLinkFired:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_needsDisplayLink;

@end
