@class NSArray, NSString;

@interface _PHPickerCollectionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *_identifiers;
@property (copy, nonatomic) NSArray *suggestedIdentifiers;
@property (copy, nonatomic) NSArray *preselectedIdentifiers;
@property (copy, nonatomic) NSArray *disabledIdentifiers;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) BOOL allowsEditingCollection;

- (id)init;
- (unsigned long long)hash;
- (id)initWithIdentifiers:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
