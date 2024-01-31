@class NSString, NSDate, NSNumber, NSDateComponents;

@interface HDCachedQueryMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, nonatomic) long long sourceEntityPersistentID;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) long long maxAnchor;
@property (readonly, copy, nonatomic) NSNumber *queryStartIndex;
@property (readonly, copy, nonatomic) NSNumber *queryEndIndex;
@property (readonly, nonatomic) long long generationNumber;
@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCachingIdentifier:(id)a0 sourceEntityPersistentID:(long long)a1 buildVersion:(id)a2 anchorDate:(id)a3 intervalComponents:(id)a4;
- (id)initWithCachingIdentifier:(id)a0 sourceEntityPersistentID:(long long)a1 maxAnchor:(long long)a2 queryStartIndex:(id)a3 queryEndIndex:(id)a4 generationNumber:(long long)a5 buildVersion:(id)a6 anchorDate:(id)a7 intervalComponents:(id)a8;

@end
