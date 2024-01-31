@class NSString, SearchUIDetailedView, SearchUIDetailedRowModel;

@interface SearchUIHorizontalDetailedCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)setFeedbackDelegate:(id)a0;
- (BOOL)configureMenuForFootnoteButton:(id)a0;
- (void)footnoteButtonPressed;
- (id)setupContentView;

@end
