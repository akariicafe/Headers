@class CNContactInlineActionsViewController, NSString, CNActionView;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) CNActionView *messageButton;
@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain, nonatomic) CNActionView *directionsButton;
@property (retain, nonatomic) CNActionView *addStopButton;
@property (retain, nonatomic) CNActionView *contactButton;
@property (retain, nonatomic) CNActionView *eventButton;
@property (retain, nonatomic) CNActionView *reminderButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonCategoriesForActionItem:(id)a0;
+ (void)clearInlineActionsCache;
+ (id)contactForActionItem:(id)a0;
+ (id)inlineActionsCache;
+ (BOOL)supportsRowModel:(id)a0;
+ (id)symbolNameForCustomActionType:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)hostingViewControllerForController:(id)a0;
- (void)contactInlineActionsViewController:(id)a0 willPerformActionOfType:(id)a1;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (id)setupView;
- (void)updateWithContacts:(id)a0;
- (id)actionViewForCustomType:(id)a0;
- (void)didPerformContactActionOfType:(id)a0;
- (void)didPressButtonWithActionType:(id)a0;

@end
