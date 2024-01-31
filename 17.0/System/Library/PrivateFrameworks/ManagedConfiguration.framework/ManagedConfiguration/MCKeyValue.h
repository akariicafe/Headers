@class NSString;

@interface MCKeyValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id value;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setLocalizedArray:(id)a0 localizedKey:(id)a1;
- (id)initWithData:(id)a0 localizedKey:(id)a1;
- (id)initWithDate:(id)a0 localizedKey:(id)a1;
- (id)initWithLocalizedArray:(id)a0 localizedKey:(id)a1;
- (id)initWithLocalizedString:(id)a0 localizedKey:(id)a1;
- (id)initWithValue:(id)a0 localizedKey:(id)a1;
- (BOOL)isStringValue;
- (void)setData:(id)a0 localizedKey:(id)a1;
- (void)setDate:(id)a0 localizedKey:(id)a1;
- (void)setLocalizedString:(id)a0 localizedKey:(id)a1;
- (void)setValue:(id)a0 localizedKey:(id)a1;

@end
