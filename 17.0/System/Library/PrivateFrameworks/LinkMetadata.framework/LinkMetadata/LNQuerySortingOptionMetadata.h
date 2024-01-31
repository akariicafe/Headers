@class NSString, LNStaticDeferredLocalizedString;

@interface LNQuerySortingOptionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) NSString *entityType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPropertyIdentifier:(id)a0 entityType:(id)a1;
- (id)initWithTitle:(id)a0 propertyIdentifier:(id)a1 entityType:(id)a2;

@end
