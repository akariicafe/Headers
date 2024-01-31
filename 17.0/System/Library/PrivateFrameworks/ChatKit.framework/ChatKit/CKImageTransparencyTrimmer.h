@class UIImage;

@interface CKImageTransparencyTrimmer : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trimmedFrame;
@property (nonatomic) char *bitmap;
@property (nonatomic) int bitmapSize;
@property (nonatomic) int bytesPerRow;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isTooSmallToTrim;
- (unsigned char)pixel:(int)a0 col:(int)a1;
- (id)trimTransparencyFromImage:(id)a0;
- (double)trimmedBottom;
- (double)trimmedLeft;
- (double)trimmedRight;
- (double)trimmedTop;

@end
