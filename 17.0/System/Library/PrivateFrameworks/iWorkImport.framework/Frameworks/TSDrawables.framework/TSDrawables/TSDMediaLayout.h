@class TSDMediaInfo, TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout <TSDMediaSizeResetting> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedAlignmentFrame;
    struct { unsigned char alignmentFrame : 1; } _mediaInvalidFlags;
    TSDMutableStroke *_dynamicStroke;
}

@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentFrameInRoot;
@property (nonatomic) BOOL shouldRenderFrameStroke;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsForStandardKnobs;

- (void)setGeometry:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)stroke;
- (BOOL)supportsRotation;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (void)invalidateAlignmentFrame;
- (BOOL)isStrokeBeingManipulated;

@end
