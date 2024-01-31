@class NSArray, NSDictionary;

@interface SCWWatchlistOrderDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedWatchlistIDs;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedWatchlistIDs;
@property (readonly, copy, nonatomic) NSArray *removedWatchlistIDs;
@property (readonly, copy, nonatomic) NSArray *reorderedWatchlistIDs;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedWatchlistIDs;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *watchlistIDsPreDiff;
@property (readonly, copy, nonatomic) NSArray *watchlistIDsPostDiff;

+ (id)reorderedWatchlistIDsFrom:(id)a0 to:(id)a1;

- (id)initWithOldWatchlistIDs:(id)a0 newWatchlistIDs:(id)a1;
- (void).cxx_destruct;

@end
