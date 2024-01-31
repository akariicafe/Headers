@class NSArray;

@interface ICAttachmentActivityViewController : UIActivityViewController

@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;

+ (id)makeWithAttachment:(id)a0 completion:(id /* block */)a1;

- (void)_performActivity:(id)a0;
- (void).cxx_destruct;
- (id)activityTypesThatInhibitPDFGeneration;
- (BOOL)inhibitPDFGenerationForActivityType:(id)a0;
- (BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)a0 attachments:(id)a1;

@end
