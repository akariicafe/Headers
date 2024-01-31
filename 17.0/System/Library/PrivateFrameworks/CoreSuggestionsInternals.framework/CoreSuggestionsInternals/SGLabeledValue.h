@class NSString;

@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;

- (BOOL)isEqualToLabeledValue:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
