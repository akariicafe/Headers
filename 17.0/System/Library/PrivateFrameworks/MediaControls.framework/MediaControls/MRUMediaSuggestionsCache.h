@class NSCache;

@interface MRUMediaSuggestionsCache : NSObject

@property (class, readonly, nonatomic) MRUMediaSuggestionsCache *sharedCache;

@property (retain, nonatomic) NSCache *imageCache;

- (id)init;
- (void).cxx_destruct;
- (id)artworkForMediaSuggestion:(id)a0;

@end
