@class NSString, NSArray, NSData, NSDate, NSNumber, NSDictionary;

@interface DCCredentialElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *elementIdentifier;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *dataValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSNumber *numberValue;
@property (retain, nonatomic) NSArray *arrayValue;
@property (retain, nonatomic) NSDictionary *dictionaryValue;
@property (nonatomic) unsigned long long numericTypeHint;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithElementIdentifier:(id)a0;
- (id)initWithElementIdentifier:(id)a0 dataValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 arrayValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 boolValue:(BOOL)a1;
- (id)initWithElementIdentifier:(id)a0 dateValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dictionaryValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 doubleValue:(double)a1;
- (id)initWithElementIdentifier:(id)a0 intValue:(long long)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1 dataValue:(id)a2 dateValue:(id)a3 numberValue:(id)a4 arrayValue:(id)a5 dictionaryValue:(id)a6 numericTypeHint:(unsigned long long)a7;

@end
