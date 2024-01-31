@class NSString;

@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
    NSString *_localizedDisplayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDisplayNameKey;
@property (readonly, nonatomic) unsigned long long predictionCategoryID;
@property (readonly, nonatomic) unsigned long long predictionCategoryIndex;

+ (id)categoryWithLocalizedDisplayName:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(long long)a2;

- (id)localizedDisplayName;
- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithPredictionCategoryID:(unsigned long long)a0 localizedDisplayNameKey:(id)a1;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictionCategoryID:(unsigned long long)a0 categoryIndex:(unsigned long long)a1 localizedDisplayName:(id)a2 localizedDisplayNameKey:(id)a3;
- (id)succinctDescription;
- (BOOL)isEqualToCategoryIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
