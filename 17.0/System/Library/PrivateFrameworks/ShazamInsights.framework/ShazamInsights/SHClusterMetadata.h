@class NSString, NSDate;

@interface SHClusterMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *uniqueHash;
@property (readonly, copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long clusterType;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 storefront:(id)a1 uniqueHash:(id)a2 creationDate:(id)a3;

@end
