@class NSString, PUIReportSensorManager;

@interface PUIReportSensorAppController : PSListController

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PUIReportSensorManager *manager;

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;

@end
