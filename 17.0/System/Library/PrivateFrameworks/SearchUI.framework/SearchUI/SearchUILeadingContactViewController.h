@class SearchUIImageView, NUIContainerBoxView, NSString, SearchUIContactsThumbnailView;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>

@property (retain, nonatomic) NUIContainerBoxView *view;
@property (retain, nonatomic) SearchUIContactsThumbnailView *avatarView;
@property (retain, nonatomic) SearchUIImageView *appIconBadgeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)setUsesCompactWidth:(BOOL)a0;
- (unsigned long long)type;
- (id)contactsForPreviewInteractionForAvatarView:(id)a0 suggestedKeysToFetch:(id)a1;
- (id)setupView;
- (void)updateWithContacts:(id)a0;
- (void)willBeginPreviewInteractionForAvatarView:(id)a0;
- (BOOL)shouldVerticallyCenter;

@end
