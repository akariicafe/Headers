@class NSArray;

@interface FCSubscribedTags : NSObject

@property (copy, nonatomic) NSArray *subscribedTags;
@property (copy, nonatomic) NSArray *mutedTags;
@property (copy, nonatomic) NSArray *autoFavoriteTags;
@property (copy, nonatomic) NSArray *groupableTags;

- (id)initWithSubscribedTags:(id)a0 mutedTags:(id)a1 autoFavoriteTags:(id)a2 groupableTags:(id)a3;
- (void).cxx_destruct;

@end
