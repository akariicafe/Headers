@interface AVCScreenCaptureAttributes : NSObject

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) float pointPixelScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (readonly, nonatomic) unsigned int displayID;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;

@end
