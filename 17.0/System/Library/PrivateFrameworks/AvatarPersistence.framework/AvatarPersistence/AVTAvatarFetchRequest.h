@class NSArray;

@interface AVTAvatarFetchRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *excludingIdentifiers;
@property (readonly, nonatomic) long long criteria;
@property (readonly, nonatomic) long long fetchLimit;

+ (id)requestForCustomAvatars;
+ (id)requestForPredefinedAvatars;
+ (id)requestForCustomAvatarsWithLimit:(long long)a0;
+ (id)requestForAvatarWithIdentifier:(id)a0;
+ (id)requestForAllAvatars;
+ (id)requestForAllAvatarsExcluding:(id)a0;
+ (id)requestForAvatarsWithIdentifiers:(id)a0;
+ (id)requestForPredefinedAvatarsExcluding:(id)a0;
+ (id)requestForStorePrimaryAvatar;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 identifier:(id)a1;
- (id)initWithCriteria:(long long)a0 identifiers:(id)a1 excludedIdentifiers:(id)a2 fetchLimit:(long long)a3;

@end
