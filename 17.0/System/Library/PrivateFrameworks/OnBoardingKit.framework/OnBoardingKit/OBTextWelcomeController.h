@class OBTextBulletedList, UIStackView;

@interface OBTextWelcomeController : OBWelcomeController

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) OBTextBulletedList *currentBulletedList;

- (id)initWithTitle:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)addBulletedListItemWithTitle:(id)a0 description:(id)a1;
- (void)addBulletedListItemWithTitle:(id)a0 description:(id)a1 accessoryButton:(id)a2;
- (void)addSectionWithHeader:(id)a0 content:(id)a1;
- (void)addSectionWithHeader:(id)a0 content:(id)a1 accessoryButton:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentLayout:(long long)a2;
- (BOOL)shouldInlineButtonTray;

@end
