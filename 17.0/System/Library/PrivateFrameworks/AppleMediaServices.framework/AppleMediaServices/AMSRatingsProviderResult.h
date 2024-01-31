@class NSArray;

@interface AMSRatingsProviderResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts;

- (void).cxx_destruct;
- (id)_mapRatingsDictionaries:(id)a0 withMediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)a0;
- (id)initWithData:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (id)initWithDictionaries:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;
- (id)initWithURLResult:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;

@end
