@class NSString, NSSet;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSSet *layerNames;

- (id)message;
- (void).cxx_destruct;
- (id)title;
- (id)radarDescription;
- (id)_buildVersion;
- (long long)radarClassification;
- (id)radarTitle;
- (BOOL)ignoreIfAlreadyDisplaying;
- (long long)radarReproducibility;
- (BOOL)shouldShowInLockScreen;

@end
