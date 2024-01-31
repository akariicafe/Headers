@class NSString, TLKDescriptionView;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate>

@property (retain, nonatomic) TLKDescriptionView *contentView;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dragSubtitleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)didPressTrailingFootnoteButton:(id)a0;
- (BOOL)configureMenuForTrailingFootnoteButton:(id)a0;
- (void)didPressFootnoteButton;
- (void)didPressMoreButton;
- (id)setupContentView;

@end
