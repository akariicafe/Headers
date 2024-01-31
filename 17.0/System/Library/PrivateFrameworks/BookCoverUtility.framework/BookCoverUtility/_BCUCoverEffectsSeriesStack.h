@class BCULayerRenderer, NSString;

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter, BCUImageSetFilter>

@property (readonly, nonatomic) BCULayerRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (double)_coverScaleForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_positionForImageAtIndex:(long long)a0 imageSetCount:(long long)a1 coverWidth:(double)a2 coverAreaWidth:(double)a3 isRTL:(BOOL)a4;
- (id)_stackLayerForDiagonalstyleWithImages:(id)a0 filters:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a4 path:(const struct CGPath **)a5;
- (id)_stackLayerForHorizontalstyleWithImages:(id)a0 filters:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a4 path:(const struct CGPath **)a5 isRTL:(BOOL)a6;
- (id)_stackLayerWithImages:(id)a0 filters:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a4 path:(const struct CGPath **)a5;
- (id)initWithIdentifier:(id)a0 renderer:(id)a1;
- (id)newOperationWithImages:(id)a0 filters:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 waitForCPUSynchronization:(BOOL)a4 completion:(id /* block */)a5;

@end
