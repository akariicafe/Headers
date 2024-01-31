@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView

@property (weak) SearchUIMovieCardSectionView *cardSectionView;

- (void).cxx_destruct;
- (id)buttonWithTitle:(id)a0 subtitle:(id)a1 punchoutURL:(id)a2;
- (void)fetchButtonsWithCompletionHandler:(id /* block */)a0;
- (id)initWithCardSectionView:(id)a0;

@end
