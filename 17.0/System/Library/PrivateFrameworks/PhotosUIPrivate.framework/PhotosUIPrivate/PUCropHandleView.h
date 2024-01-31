@class NSArray, UIView;

@interface PUCropHandleView : UIView

@property (retain, nonatomic, setter=_setLineViews:) NSArray *_lineViews;
@property (retain, nonatomic, setter=_setOverlayViews:) NSArray *_overlayViews;
@property (retain, nonatomic, setter=_setLayoutReferenceView:) UIView *_layoutReferenceView;
@property (readonly, nonatomic) unsigned long long handle;
@property (readonly, nonatomic) unsigned long long oppositeHandle;
@property (readonly, nonatomic) NSArray *adjacentHandles;
@property (readonly, nonatomic) id layoutReferenceItem;
@property (readonly, nonatomic, getter=isTop) BOOL top;
@property (readonly, nonatomic, getter=isLeft) BOOL left;
@property (readonly, nonatomic, getter=isRight) BOOL right;
@property (readonly, nonatomic, getter=isBottom) BOOL bottom;
@property (readonly, nonatomic, getter=isCorner) BOOL corner;
@property (readonly, nonatomic, getter=isLateral) BOOL lateral;
@property (nonatomic, getter=isOverlayHidden) BOOL overlayHidden;

+ (id)allHandles;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_createLineView;
- (id)_createCornerOverlayView;
- (id)initForHandle:(unsigned long long)a0;

@end
