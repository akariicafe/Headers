@interface StocksCore.CloudKitWatchlistService : _TtCs12_SwiftObject <SCWWatchlistObserver> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ metadataManager;
    void /* unknown type, empty encoding */ metadataProvider;
    void /* unknown type, empty encoding */ lazyWatchlist;
}

- (void)watchlistManager:(id)a0 didChangeInWatchlist:(id)a1;
- (void)watchlistManager:(id)a0 didChangeInWatchlistOrder:(id)a1;

@end
