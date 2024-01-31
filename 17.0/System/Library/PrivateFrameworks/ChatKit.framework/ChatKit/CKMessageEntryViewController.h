@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController

@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (nonatomic) BOOL inputAccessoryViewControllerEnabled;

+ (BOOL)_requiresProxyInterface;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithEntryView:(id)a0;

@end
