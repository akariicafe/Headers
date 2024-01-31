@class PRSPosterConfiguration, CNContact, PRPosterLabel, UIView, UILabel, UIButton;

@interface TPInComingCallUISnapshotViewController : UIViewController

@property (retain, nonatomic) UIView *overlaysContainerView;
@property (retain, nonatomic) PRPosterLabel *mobileLabel;
@property (retain, nonatomic) UIButton *remindMeButton;
@property (retain, nonatomic) UIButton *messageButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *callDetailsViewButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) PRSPosterConfiguration *configuration;
@property (nonatomic) long long style;
@property (retain, nonatomic) UILabel *fakeLabel;
@property (retain, nonatomic) CNContact *contact;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontalNameLabelBoundingRectForName:(id)a0 window:(id)a1;
+ (id)posterDisplayNameComponentsForContact:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalNameLabelBoundingRectForName:(id)a0 window:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontalNameLabelBoundingRectForName:(id)a0 caption:(id)a1 window:(id)a2 preferredTitleFont:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalNameLabelBoundingRectForName:(id)a0 caption:(id)a1 window:(id)a2 preferredTitleFont:(id)a3;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 style:(long long)a1 contact:(id)a2 fallbackText:(id)a3;
- (id)nameString;
- (void)snapshotWithOptions:(unsigned long long)a0 windowScene:(id)a1 completionBlock:(id /* block */)a2;
- (void)setUpConstraints;
- (id)attachmentIdentifiersForStyle;
- (id)attachmentsForStyle;
- (id)generateOverlaysSnapshot;
- (void)hideElementsBasedOn:(long long)a0;
- (id)identifierForStyle;
- (id)initWithConfiguration:(id)a0 style:(long long)a1 contact:(id)a2;
- (id)initWithConfiguration:(id)a0 style:(long long)a1 nameString:(id)a2;
- (void)setNameLabelFont:(id)a0;
- (void)setNameLabelTextColor:(id)a0;
- (void)setUpButton:(long long)a0;
- (void)setUpCallDetailsViewButton;
- (void)setUpOverlayContentIfNeeded;
- (void)setUpOverlaysContainer;
- (void)setupLabels;
- (void)snapshotWithOptions:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)snapshotWithOptions:(unsigned long long)a0 windowScene:(id)a1 useAttachmentConfiguration:(BOOL)a2 completionBlock:(id /* block */)a3;

@end
