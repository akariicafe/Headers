@class NSString, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (BOOL)isEqualToLabeledValue:(id)a0;
- (unsigned long long)hash;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
