@interface _MPDownloadProgressRingView : UIView

@property (nonatomic) double progress;

+ (Class)layerClass;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutSubviews;
- (void)_updateShapePath;

@end
