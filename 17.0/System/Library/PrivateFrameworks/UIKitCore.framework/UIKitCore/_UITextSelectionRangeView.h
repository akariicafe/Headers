@class UIColor, CAShapeLayer;

@interface _UITextSelectionRangeView : UIView

@property (readonly, nonatomic) CAShapeLayer *pathLayer;
@property (nonatomic) struct CGPath { } *path;
@property (retain, nonatomic) UIColor *selectionColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;

+ (Class)layerClass;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void).cxx_destruct;

@end
