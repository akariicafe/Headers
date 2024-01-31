@class NSString, NSMapTable;
@protocol BLSAssertionObserving;

@interface SBFAlwaysOnLiveRenderingBLSAssertionProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAssertionProvider> {
    NSMapTable *_assertions;
}

@property (weak, nonatomic) id<BLSAssertionObserving> assertionObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)acquireWithExplanation:(id)a0 attributes:(id)a1;
- (long long)acquiredAssertionsCount;
- (void)assertion:(id)a0 didCancelWithError:(id)a1;
- (void)assertionWasAcquired:(id)a0;

@end
