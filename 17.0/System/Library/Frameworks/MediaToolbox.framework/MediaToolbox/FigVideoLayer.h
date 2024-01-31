@class FigVideoLayerInternal;

@interface FigVideoLayer : FigThreadSafeCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (id)layerDisplayName;
- (void)dealloc;
- (void)notificationBarrier;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)_setupInternalFigVideoLayer;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (BOOL)isVideoLayerBeingServiced;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (id)initWithoutDeferredTransaction;
- (void)_setupTraceLevel;

@end
