@class NSString, HKGraphViewTileThread, CALayer, UIView, _HKGraphTileRenderToImage;
@protocol HKGraphTileDrawingDelegate;

@interface HKGraphTile : NSObject <CALayerDelegate>

@property (readonly, weak, nonatomic) HKGraphViewTileThread *graphViewTileThread;
@property (retain, nonatomic) CALayer *caLayer;
@property (nonatomic) long long configurationChangedCounter;
@property (readonly, weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) _HKGraphTileRenderToImage *currentImageRenderer;
@property (nonatomic) double lastImageAssignmentTime;
@property (weak, nonatomic) id<HKGraphTileDrawingDelegate> drawingDelegate;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL tileDisplayedSinceSetNeedsDisplay;
@property (readonly, nonatomic) long long currentColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (void)_handlePostRenderOperations;
- (id)_imageRendererForSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureTileWithScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 column:(long long)a1;
- (id)initWithParentView:(id)a0 graphViewTileThread:(id)a1;
- (void)prepareTileForReuse;
- (void)refreshTileContent;
- (void)renderTileInBackgroundWithRenderer:(id)a0 tileSize:(struct CGSize { double x0; double x1; })a1 configurationChangedCounter:(long long)a2;

@end
