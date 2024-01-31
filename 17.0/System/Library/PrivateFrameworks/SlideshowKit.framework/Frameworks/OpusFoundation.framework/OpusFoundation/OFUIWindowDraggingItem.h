@class UIImageView, UIImage;
@protocol OFUIWindowDraggingPasteboard;

@interface OFUIWindowDraggingItem : NSObject

@property (retain, nonatomic) id<OFUIWindowDraggingPasteboard> object;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double rotation;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalBounds;
@property (nonatomic) double imageAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageContentsRect;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originalTransform;
@property (nonatomic) BOOL isReverting;

- (id)init;
- (void)dealloc;
- (id)initWithObject:(id)a0 image:(id)a1;

@end
