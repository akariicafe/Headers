@class NSString, NSArray;

@interface FASettingsPreset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long minAge;
@property (readonly, nonatomic) long long maxAge;
@property (readonly, copy, nonatomic) NSArray *sources;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)sourceWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 minAge:(long long)a1 maxAge:(long long)a2 sources:(id)a3;

@end
