@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity

@property (retain, nonatomic) HFAccessoryDiagnosticItem *diagnosticItem;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithDiagnosticItem:(id)a0;

@end
