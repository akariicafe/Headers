@interface CAContentStreamFrame : NSObject

@property int status;
@property unsigned long long displayTime;
@property struct __IOSurface { } *surface;
@property unsigned int surfaceId;
@property unsigned long long dropCount;
@property double displayResolution;
@property double contentScaleX;
@property double contentScaleY;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;

@end
