@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

@interface DCActivityViewController : UIActivityViewController

@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;

- (void)_performActivity:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)activityTypesThatInhibitPDFGeneration;
- (BOOL)inhibitPDFGenerationForActivityType:(id)a0;
- (BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)a0 documentInfoCollection:(id)a1;

@end
