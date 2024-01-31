@interface MPModelLibrarySearchResponse : MPModelLibraryResponse

- (void)dealloc;
- (id)initWithRequest:(id)a0;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (BOOL)hasMoreResultsForSectionAtIndex:(long long)a0;
- (long long)searchWeightForIndexPath:(id)a0;

@end
