@class NSURL, ICAttachment, NSSNewsViewController;

@interface ICNewsViewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSSNewsViewController *newsViewController;

- (id)initWithURL:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
