@class NSString, NSValue;

@interface _UIPrototypingValue : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSValue *defaultValue;
@property (retain, nonatomic) NSValue *minimumValue;
@property (retain, nonatomic) NSValue *maximumValue;
@property (retain, nonatomic) NSValue *currentValue;
@property (nonatomic) double stepSize;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
