@interface VideosUI.SportsPlayByPlayCollectionViewModel : VideosUI.CollectionViewModel {
    void /* unknown type, empty encoding */ numberOfPlays;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ sport;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ returningFromBackground;
    void /* unknown type, empty encoding */ sportsSpoilersEnabled;
}

- (void)willEnterForeground;

@end
