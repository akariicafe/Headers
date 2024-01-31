@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CFXEffectComposition : NSObject

@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *overlays;
@property (retain, nonatomic) NSMutableArray *animojis;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *effects;
@property (readonly, nonatomic) NSArray *jtEffects;
@property (readonly, nonatomic) BOOL hasFaceTrackedOverlays;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL requiresFaceTracking;

- (id)init;
- (void).cxx_destruct;
- (id)CFX_effectsForJettyType:(int)a0;
- (void)addEffect:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasEffectOfType:(id)a0;
- (unsigned long long)indexOfEffect:(id)a0;
- (void)insertEffectAtIndex:(id)a0 atIndex:(unsigned long long)a1;
- (id)jtEffectsForType:(int)a0;
- (void)removeAllEffects:(id /* block */)a0;
- (void)removeAllEffectsOfType:(id)a0 completion:(id /* block */)a1;
- (void)removeAllOverlayEffects:(id /* block */)a0;
- (void)removeEffect:(id)a0 completion:(id /* block */)a1;

@end
