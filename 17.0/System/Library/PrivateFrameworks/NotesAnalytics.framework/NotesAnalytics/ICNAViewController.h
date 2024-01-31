@class ICNAEventReporter;

@interface ICNAViewController : UIViewController

@property (retain, nonatomic) ICNAEventReporter *eventReporter;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)eventReporterLostSession:(id)a0;

@end
