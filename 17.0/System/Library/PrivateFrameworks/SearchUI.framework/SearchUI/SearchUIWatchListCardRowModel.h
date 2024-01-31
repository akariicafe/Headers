@class SFPunchout, NSString, SearchUIWatchListCardsManager, SFWatchListCardSection, SFImage;
@protocol SearchUIWatchListCardRowModelDelegate;

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUIWatchListCardsManager *manager;
@property (nonatomic) BOOL hasLoaded;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) SFImage *image;
@property (weak) id<SearchUIWatchListCardRowModelDelegate> delegate;
@property (retain, nonatomic) SFWatchListCardSection *cardSection;
@property (nonatomic) BOOL hasError;

- (int)separatorStyle;
- (BOOL)isDraggable;
- (BOOL)isTappable;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 cardSection:(id)a1 asyncRowManager:(id)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)punchouts;
- (void)updateWithTitle:(id)a0 subtitle:(id)a1;
- (void)updateWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 punchout:(id)a3;

@end
