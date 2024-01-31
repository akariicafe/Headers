@class UIImage;

@interface UIMorphingLabelImage : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void).cxx_destruct;

@end
