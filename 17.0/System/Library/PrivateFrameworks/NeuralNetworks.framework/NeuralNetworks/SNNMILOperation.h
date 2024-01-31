@class NSString, NSArray;

@interface SNNMILOperation : NSObject

@property (readonly, nonatomic) NSString *opName;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) NSArray *outputs;

- (void).cxx_destruct;
- (id)attributeWithName:(id)a0;
- (id)initWithOperatorName:(id)a0 inputs:(id)a1 attributes:(id)a2 outputs:(id)a3;
- (id)inputWithName:(id)a0;

@end
