@class NSString;
@protocol GCSJSONObject;

@interface GCSElement : NSObject <NSSecureCoding, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *sfSymbolsName;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) int remappingKey;
@property (readonly, nonatomic) NSString *localizedName;

- (id)initWithJSONObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 nameLocalizationKey:(id)a1 sfSymbolsName:(id)a2 remappingKey:(int)a3 kind:(long long)a4;

@end
