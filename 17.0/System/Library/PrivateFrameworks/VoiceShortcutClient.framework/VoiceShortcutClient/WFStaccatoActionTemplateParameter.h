@class NSString, WFStaccatoActionTemplateParameterValue;

@interface WFStaccatoActionTemplateParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) WFStaccatoActionTemplateParameterValue *defaultValue;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 actionIdentifier:(id)a1 localizedLabel:(id)a2 localizedDescription:(id)a3 defaultValue:(id)a4;
- (BOOL)isEqualToActionTemplateParameter:(id)a0;

@end
