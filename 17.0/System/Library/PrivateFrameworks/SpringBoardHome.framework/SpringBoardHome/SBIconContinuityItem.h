@class NSString;

@interface SBIconContinuityItem : NSObject

@property (readonly, nonatomic) long long badgeType;
@property (readonly, nonatomic) NSString *systemImageName;

+ (long long)_continuityBadgeTypeForNSString:(id)a0;
+ (id)_resolvedItemForExplicitBadgeType:(long long)a0 deviceTypeIdentifier:(id)a1;
+ (id)itemForBadgeTypeString:(id)a0 deviceTypeIdentifier:(id)a1;
+ (id)itemForContinuityInfo:(id)a0;
+ (id)itemWithBadgeType:(long long)a0 deviceTypeIdentifier:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBadgeType:(long long)a0 systemImageName:(id)a1;

@end
