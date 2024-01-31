@class NSString, PDFView, NSData, NSDate, PDFDocument;

@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride>

@property (readonly, nonatomic) NSData *pdfData;
@property (readonly, nonatomic) NSDate *sampleDate;
@property (readonly, nonatomic) PDFDocument *pdfDocument;
@property (readonly, nonatomic) PDFView *pdfView;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)didTapDone;
- (void)didTapShare:(id)a0;
- (unsigned long long)overrideMask;
- (id)initWithPDFData:(id)a0 sampleDate:(id)a1 firstName:(id)a2 lastName:(id)a3;

@end
