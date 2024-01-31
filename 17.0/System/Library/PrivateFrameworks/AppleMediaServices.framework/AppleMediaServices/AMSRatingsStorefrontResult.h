@class NSArray;

@interface AMSRatingsStorefrontResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts;

- (void).cxx_destruct;
- (id)initWithDictionaries:(id)a0 mediaType:(unsigned long long)a1;
- (id)_mapRatingsDictionaries:(id)a0 withMediaType:(unsigned long long)a1;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)a0;
- (id)initWithData:(id)a0 mediaType:(unsigned long long)a1;
- (id)initWithURLResult:(id)a0 mediaType:(unsigned long long)a1;

@end
