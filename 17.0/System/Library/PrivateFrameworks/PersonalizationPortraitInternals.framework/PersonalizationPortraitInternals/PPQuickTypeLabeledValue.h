@class NSString;

@interface PPQuickTypeLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) double scoreBoost;
@property (readonly, nonatomic) unsigned int fields;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1 scoreBoost:(double)a2;
+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;
+ (id)labeledValueWithLabel:(id)a0 value:(id)a1 scoreBoost:(double)a2 fields:(unsigned int)a3;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1 scoreBoost:(double)a2 fields:(unsigned int)a3;

@end
