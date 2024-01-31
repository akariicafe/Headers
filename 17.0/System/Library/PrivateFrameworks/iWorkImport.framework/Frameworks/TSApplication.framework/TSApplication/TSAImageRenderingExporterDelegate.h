@class NSString, NSURL, TSARenderingExporter, TSUColor;
@protocol TSKImageExporter;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    NSURL *mURL;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL scaleToFit;
@property (retain, nonatomic) TSUColor *backgroundColor;
@property (copy, nonatomic) NSString *imageType;
@property (nonatomic) float compressionFactor;

- (void)teardown;
- (void).cxx_destruct;
- (void)setup;
- (double)viewScale;
- (BOOL)supportsPaging;
- (id)initWithRenderingExporter:(id)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (BOOL)supportsRenderingQuality;

@end
