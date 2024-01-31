@class NSString, NSNumber;

@interface USOSpanProperty : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) NSNumber *valueInt;
@property (readonly, nonatomic) NSNumber *valueFloat;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 valueString:(id)a1;
- (id)initWithKey:(id)a0 valueFloat:(float)a1;
- (id)initWithKey:(id)a0 valueInt:(int)a1;

@end
