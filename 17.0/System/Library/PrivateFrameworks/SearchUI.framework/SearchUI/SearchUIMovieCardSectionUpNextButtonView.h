@class SearchUIWatchListState;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView

@property (retain, nonatomic) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)initIsInUpNext:(BOOL)a0 cardSectionView:(id)a1;
- (void)updateUpNextStatus;

@end
