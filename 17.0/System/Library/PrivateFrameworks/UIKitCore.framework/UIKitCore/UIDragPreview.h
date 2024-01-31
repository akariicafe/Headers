@class NSDictionary, _DUIPreview, UIView, UIDragPreviewParameters, NSValue;

@interface UIDragPreview : NSObject <NSCopying> {
    NSValue *_preferredAnchorPoint;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultBoundingSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } textBoundingSize;

@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot;
@property (nonatomic) BOOL avoidAnimation;
@property (nonatomic) struct CGPoint { double x0; double x1; } preferredAnchorPoint;
@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (copy, nonatomic) NSDictionary *_springboardParameters;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) UIDragPreviewParameters *parameters;

+ (id)previewForURL:(id)a0;
+ (id)previewForURL:(id)a0 title:(id)a1;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithView:(id)a0 parameters:(id)a1;

@end
