@class UIViewController, CNContact, UIImageView, UIView, UILabel, CNAvatarView;
@protocol EKUILabeledAvatarViewDelegate;

@interface EKUILabeledAvatarView : UIView

@property (retain) CNAvatarView *avatar;
@property (retain) UIImageView *badge;
@property (retain) UIView *pressedAccentOverlay;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property unsigned long long options;
@property (retain) CNContact *contact;
@property (weak, nonatomic) id<EKUILabeledAvatarViewDelegate> delegate;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) unsigned long long selectionState;
@property (weak) UIViewController *viewController;
@property (nonatomic) BOOL loadContactsAsynchronously;

+ (id)contactKeysToFetch;
+ (id)_createAvatarView;
+ (id)sortedAvatarListFromParticipants:(id)a0;

- (void)didLongPress;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateLabel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;
- (void)updateWithContacts:(id)a0;
- (void)didTap;
- (id)initWithContact:(id)a0 placement:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithEmail:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3 placement:(unsigned long long)a4 options:(unsigned long long)a5;
- (id)initWithIdentity:(id)a0 placement:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithPlacement:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)updateAvatarViewWithAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
- (void)updateWithAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
- (void)updateWithParticipant:(id)a0;

@end
