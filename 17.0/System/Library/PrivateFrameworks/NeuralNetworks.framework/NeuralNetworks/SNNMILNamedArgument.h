@class NSString, SNNMILValue;

@interface SNNMILNamedArgument : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SNNMILValue *value;

- (id)initWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
