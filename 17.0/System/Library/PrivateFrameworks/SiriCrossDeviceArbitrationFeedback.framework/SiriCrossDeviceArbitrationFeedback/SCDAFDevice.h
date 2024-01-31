@class NSString, NSArray;

@interface SCDAFDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *productTypes;
@property (retain, nonatomic) NSArray *deviceClass;
@property (copy, nonatomic) NSString *speechId;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *roomName;

+ (id)arrayDictionaryRepresentation:(id)a0;
+ (unsigned long long)deviceClassFromProductTypeString:(id)a0;
+ (id)devicesArrayWithDictionaryRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;

@end
