@class PKPassEntitlement, NSString, NSDictionary, NSNumber, PKPassSharedEntitlement;

@interface PKDisplayablePassEntitlement : NSObject <NSSecureCoding, NSCopying> {
    NSString *_entitlementTemplate;
    NSDictionary *_templateFields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedGroup;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) long long groupPriority;
@property (nonatomic) BOOL clearGroupWhenSelected;
@property (readonly, nonatomic) NSString *entitlementIdentifier;
@property (readonly, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) PKPassEntitlement *entitlement;

+ (void)localizedEntitlementsFromEntitlements:(id)a0 pass:(id)a1 useCachedTemplates:(BOOL)a2 completion:(id /* block */)a3;
+ (void)localizedEntitlementsFromDisplayableEntitlements:(id)a0 pass:(id)a1 useCachedTemplates:(BOOL)a2 completion:(id /* block */)a3;
+ (id)localizedEntitlementFromCarKeyEntitlement:(id)a0 pass:(id)a1;
+ (id)localizedEntitlementsFromDisplayableEntitlements:(id)a0 pass:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)replaceEntitlementWithSharedEntitlement:(id)a0;

@end
