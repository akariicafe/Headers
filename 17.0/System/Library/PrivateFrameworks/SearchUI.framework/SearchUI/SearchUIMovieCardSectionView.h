@class NUIContainerStackView, SFMediaInfoCardSection;

@interface SearchUIMovieCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SFMediaInfoCardSection *section;
@property (retain, nonatomic) NUIContainerStackView *contentView;

+ (id)dragTitleForCardSection:(id)a0;

- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
