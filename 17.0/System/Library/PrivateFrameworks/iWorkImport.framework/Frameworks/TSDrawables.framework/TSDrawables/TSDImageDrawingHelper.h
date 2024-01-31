@class TSDRep, TSPData;
@protocol TSDImageDrawingDataSource;

@interface TSDImageDrawingHelper : NSObject

@property (readonly, weak, nonatomic) TSDRep<TSDImageDrawingDataSource> *rep;
@property (readonly, nonatomic) TSPData *imageDataForDrawing;
@property (readonly, nonatomic) BOOL drawsError;
@property (readonly, nonatomic) BOOL drawsBitmap;
@property (readonly, nonatomic) BOOL shouldShowCheckerboard;

- (void)dealloc;
- (void)teardown;
- (void).cxx_destruct;
- (id)p_imageProvider;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithRep:(id)a0;
- (struct CGSize { double x0; double x1; })p_desiredSizedImageSize;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_validatedThumbnailImageProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_antialiasingDefeatedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawInContext:(struct CGContext { } *)a0 forLayer:(BOOL)a1 forShadowOrHitTest:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectInContext:(struct CGContext { } *)a0;
- (BOOL)p_canDrawThumbnailAsSizedImage;
- (struct CGSize { double x0; double x1; })p_imagePixelSize;

@end
