@class FCFeedRange, NSString, NSArray, NSData;

@interface FCFDBFeed : NSObject

@property (readonly, nonatomic) NSString *feedID;
@property (readonly, nonatomic) unsigned long long refreshedFromOrder;
@property (readonly, nonatomic) unsigned long long refreshedToOrder;
@property (readonly, nonatomic) FCFeedRange *refreshRegion;
@property (readonly, nonatomic) NSArray *fetchedRanges;
@property (readonly, nonatomic) FCFeedRange *trailingEmptyRegion;
@property (readonly, nonatomic) long long feedLookupID;
@property (readonly, nonatomic) NSData *fetchedRangesData;

- (BOOL)hasFetchedRangesInRange:(id)a0;
- (id)initWithFeedID:(id)a0 feedLookupID:(long long)a1 refreshedFromOrder:(unsigned long long)a2 refreshedToOrder:(unsigned long long)a3 fetchedRanges:(id)a4;
- (void)_visitContiguousRangesInRange:(id)a0 withBlock:(id /* block */)a1;
- (id)copyWithoutFetchedRange:(id)a0;
- (id)initFromSQLWithFeedID:(const char *)a0 feedLookupID:(long long)a1 refreshedFromOrder:(long long)a2 refreshedToOrder:(long long)a3 fetchedRangesBytes:(const void *)a4 fetchedRangesLength:(int)a5;
- (id)initWithFeedID:(id)a0 feedLookupID:(long long)a1;
- (void).cxx_destruct;
- (void)d_sanityCheck;
- (id)fetchedRangePrecedingOrder:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithRefreshedFromOrder:(unsigned long long)a0 refreshedToOrder:(unsigned long long)a1 newlyFetchedRange:(id)a2;
- (id)fetchedRangeFollowingOrder:(unsigned long long)a0;
- (void)enumerateGapsWithBlock:(id /* block */)a0;
- (id)contiguousFetchedRangeInRange:(id)a0;

@end
