@class SearchUIPersonHeaderViewController, NSString, SFPersonHeaderCardSection, SearchUIPersonHeaderBoxView;

@interface SearchUIPersonHeaderCardSectionView : SearchUICardSectionView <CNGroupIdentityHeaderViewControllerDelegate>

@property (retain) SearchUIPersonHeaderViewController *viewControllerWithDowntimeButton;
@property (retain) SearchUIPersonHeaderViewController *viewControllerWithPayButton;
@property (retain) SearchUIPersonHeaderViewController *viewController;
@property (retain) SearchUIPersonHeaderBoxView *boxView;
@property (retain) SFPersonHeaderCardSection *section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactWithFullName:(id)a0;
+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)contact;
- (void).cxx_destruct;
- (void)groupIdentityHeaderViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (void)groupIdentityHeaderViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (id)setupContentView;
- (id)embeddedViewController;
- (void)sendCommandEngagementFeedbackWithType:(id)a0 didSelectFromOptionsMenu:(BOOL)a1 didDisplayHandleOptions:(BOOL)a2;
- (void)updateWithContact:(id)a0 person:(id)a1;
- (void)updateWithPerson:(id)a0;

@end
