@class NSURL, NSString;

@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>

@property (nonatomic) unsigned long long provenance;
@property (readonly, nonatomic) NSURL *pdfTemporaryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithPDFData:(id)a0 sampleDate:(id)a1 firstName:(id)a2 lastName:(id)a3 provenance:(unsigned long long)a4;
- (id)pdfFileNameForSampleDate:(id)a0 firstName:(id)a1 lastName:(id)a2;

@end
