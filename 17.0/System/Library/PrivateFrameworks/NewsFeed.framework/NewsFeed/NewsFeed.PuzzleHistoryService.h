@interface NewsFeed.PuzzleHistoryService : NSObject <FCPuzzleHistoryObserving> {
    void /* unknown type, empty encoding */ puzzleHistory;
    void /* unknown type, empty encoding */ puzzleService;
    void /* unknown type, empty encoding */ puzzleHistoryObservers;
}

- (void)puzzleHistory:(id)a0 didAddPuzzleItems:(id)a1 modifiedPuzzleItems:(id)a2 removedPuzzleItems:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
