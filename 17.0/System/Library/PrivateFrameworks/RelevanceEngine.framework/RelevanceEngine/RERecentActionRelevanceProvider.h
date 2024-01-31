@class RERecentAction, NSString;

@interface RERecentActionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) RERecentAction *recentAction;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long actionIdentifier;

- (unsigned long long)_hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 actionIdentifier:(unsigned long long)a1;

@end
