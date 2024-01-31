@interface CAContentStreamOptions : NSObject <NSCopying>

@property unsigned int targetDisplayId;
@property unsigned int pixelFormat;
@property struct CGSize { double width; double height; } frameSize;
@property unsigned int queueDepth;
@property double minimumFrameTime;
@property BOOL alwaysScaleToFit;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property BOOL preserveAspectRatioKey;
@property struct CGColorSpace { } *colorSpaceKey;
@property struct CGColor { } *backgroundColorKey;
@property BOOL showCursorKey;
@property unsigned char YCbCrMatrix;
@property unsigned char ChromaLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
