@class NSString;

@interface DNDContactHandle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_normalizedValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *value;

- (unsigned long long)hash;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)normalizedValue;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForRedacted:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithContactIdentifier:(id)a0 type:(unsigned long long)a1 value:(id)a2;
- (BOOL)matchesContactHandle:(id)a0;

@end
