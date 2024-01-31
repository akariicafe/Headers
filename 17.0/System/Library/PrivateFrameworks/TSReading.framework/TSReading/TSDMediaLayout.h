@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedAlignmentFrame;
    struct { unsigned char alignmentFrame : 1; } mMediaInvalidFlags;
    TSDMutableStroke *mDynamicStroke;
    BOOL mShouldRenderFrameStroke;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForStandardKnobs;
@property (nonatomic) BOOL shouldRenderFrameStroke;

- (void)setGeometry:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)stroke;
- (BOOL)supportsRotation;
- (id)mediaInfo;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)a0;
- (void)invalidateAlignmentFrame;
- (BOOL)isStrokeBeingManipulated;

@end
