@class NSString, NSArray;

@interface CITextFeature : CIFeature

@property (readonly) NSString *messageString;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) struct CGPoint { double x; double y; } topLeft;
@property (readonly) struct CGPoint { double x; double y; } topRight;
@property (readonly) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) struct CGPoint { double x; double y; } bottomRight;
@property (readonly) NSArray *subFeatures;

- (void)dealloc;
- (id)type;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topLeft:(struct CGPoint { double x0; double x1; })a1 topRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3 bottomRight:(struct CGPoint { double x0; double x1; })a4 subFeatures:(id)a5 messageString:(id)a6;

@end
