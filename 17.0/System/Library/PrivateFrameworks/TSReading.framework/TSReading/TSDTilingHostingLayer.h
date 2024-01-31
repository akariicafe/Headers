@class TSDInteractiveCanvasController, NSMutableSet;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    NSMutableSet *mDirtyTilingLayers;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)p_commonInit;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;

@end
