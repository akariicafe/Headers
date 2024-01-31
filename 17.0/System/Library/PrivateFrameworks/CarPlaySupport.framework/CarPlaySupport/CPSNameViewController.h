@class NSArray, CPSNameStackView, NSString, UILabel;
@protocol CPEntityNameProviding;

@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting>

@property (retain, nonatomic) id<CPEntityNameProviding> entity;
@property (readonly, nonatomic) UILabel *primaryLabel;
@property (readonly, nonatomic) UILabel *secondaryLabel;
@property (readonly, nonatomic) UILabel *tertiaryLabel;
@property (readonly, nonatomic) CPSNameStackView *stackView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (id)initWithEntity:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)updateViews;
- (void)updateWithEntity:(id)a0;

@end
