@class NSString, INInteraction;

@interface HVInteraction : NSObject <NSCopying, BMIdentifiableContentEvent>

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) INInteraction *interaction;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)uniqueIdForInteractionIdentifier:(id)a0;
+ (id)domainIdForInteractionGroupId:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithInteraction:(id)a0 bundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
