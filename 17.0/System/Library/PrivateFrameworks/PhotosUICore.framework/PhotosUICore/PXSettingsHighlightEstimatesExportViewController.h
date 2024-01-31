@class NSDictionary, UITextView, NSString;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate>

@property BOOL exportHighlightEstimatesOnViewDidAppear;
@property (retain) UITextView *textView;
@property (retain) NSDictionary *highlightEstimatesDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_fetchHighlightEstimatesDictionary;
- (void)_sendEmail:(id)a0;

@end
