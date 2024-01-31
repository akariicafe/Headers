@class UIImageView, UIVisualEffectView, UIView;

@interface _SFURLLabelAccessoryItem : NSObject

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) UIImageView *squishedView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIVisualEffectView *squishedEffectView;
@property (readonly, nonatomic) UIView *viewForLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL centerAligned;

- (void).cxx_destruct;

@end
