@class PIParallaxClockLayoutRequest, PIParallaxLayerStackRequest, NUCoalescer, PIParallaxClockMaterialRequest, NSObject;
@protocol OS_dispatch_group, PISegmentationItem, OS_dispatch_queue;

@interface PUParallaxLayerStackViewModelUpdater : NSObject <NSCopying>

@property (readonly, nonatomic) id<PISegmentationItem> item;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *transactionGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionResponseQueue;
@property (retain, nonatomic) PIParallaxLayerStackRequest *mainRenderRequest;
@property (retain, nonatomic) PIParallaxLayerStackRequest *backfillRenderRequest;
@property (retain, nonatomic) PIParallaxLayerStackRequest *settlingEffectRenderRequest;
@property (retain, nonatomic) PIParallaxClockLayoutRequest *clockOverlapRequest;
@property (retain, nonatomic) PIParallaxClockMaterialRequest *clockMaterialRequest;
@property (retain, nonatomic) NUCoalescer *styleChangeCoalescer;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSegmentationItem:(id)a0;
- (void)ensureOffscreenModelIsUnloaded:(id)a0;
- (void)_updatePriorityForRequest:(id)a0 viewModel:(id)a1 highPriority:(BOOL)a2 importanceOrder:(double)a3;
- (void)beginRenderTransaction;
- (void)cancelPendingRenders;
- (void)endRenderTransaction;
- (void)ensureOnscreenModelIsLoaded:(id)a0;
- (void)notifyWhenInFlightRendersComplete:(id /* block */)a0;
- (void)recalculateClockAreaLuminance:(id)a0 highPriority:(BOOL)a1 importanceOrder:(double)a2;
- (void)recalculateClockIntersection:(id)a0 allViewModels:(id)a1 highPriority:(BOOL)a2;
- (void)recalculateClockOverlap:(id)a0 allViewModels:(id)a1 highPriority:(BOOL)a2;
- (void)recalculateClockOverlap:(id)a0 highPriority:(BOOL)a1 importanceOrder:(double)a2 allViewModels:(id)a3 intersectionOnly:(BOOL)a4 completion:(id /* block */)a5;
- (void)renderBackfillLayers:(id)a0 highPriority:(BOOL)a1 importanceOrder:(double)a2 completion:(id /* block */)a3;
- (void)renderMainLayers:(id)a0 highPriority:(BOOL)a1 importanceOrder:(double)a2 completion:(id /* block */)a3;
- (void)renderModelAfterStyleInitialization:(id)a0 isOnscreen:(BOOL)a1;
- (void)renderOffscreenModelAfterVisibleFrameChange:(id)a0 highPriority:(BOOL)a1;
- (void)renderOnscreenModelAfterStyleChange:(id)a0;
- (void)renderOnscreenModelAfterVisibleFrameChange:(id)a0 allViewModels:(id)a1;
- (void)renderSettlingEffectLayerIfNeededForViewModel:(id)a0 highPriority:(BOOL)a1 importanceOrder:(double)a2;
- (BOOL)waitForInFlightRenders:(double)a0;

@end
