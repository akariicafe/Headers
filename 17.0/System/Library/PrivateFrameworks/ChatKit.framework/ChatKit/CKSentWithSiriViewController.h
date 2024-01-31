@class UILabel, NSString, UIImageView, UIScrollView, UIView, CKConversation;

@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contextDescriptionLabel;
@property (retain, nonatomic) UIImageView *heroImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inputAccessoryViewController;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)_titleLabelText;
- (id)initWithConversation:(id)a0;
- (id)localizedStringWithLanguageCode:(id)a0 format:(id)a1;

@end
