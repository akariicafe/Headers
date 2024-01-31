@class NSValue, UIColor;

@interface _UITextUnderlineRect : UITextSelectionRect

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) NSValue *transformValue;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) long long underlineType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullRect;

+ (id)underlineRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offset:(double)a1 transform:(id)a2;

- (id)_transform;
- (id)description;
- (void).cxx_destruct;

@end
