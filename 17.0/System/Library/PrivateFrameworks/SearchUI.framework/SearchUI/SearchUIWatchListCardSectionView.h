@class SearchUIWatchListCardRowModel, TLKSimpleRowView;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>

@property (retain, nonatomic) TLKSimpleRowView *contentView;
@property (retain, nonatomic) SearchUIWatchListCardRowModel *rowModel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;
- (void)didUpdateRowModel:(id)a0 animate:(BOOL)a1;
- (void)updateTitle:(id)a0 subtitle:(id)a1 image:(id)a2;

@end
