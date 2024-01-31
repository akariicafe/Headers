@class NSDictionary;

@interface CHSDictionaryBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *value;

+ (id)boxedValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
