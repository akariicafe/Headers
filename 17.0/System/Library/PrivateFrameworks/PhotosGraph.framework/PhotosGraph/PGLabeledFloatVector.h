@class MAFloatVector;

@interface PGLabeledFloatVector : NSObject

@property (readonly, nonatomic) MAFloatVector *floatVector;
@property (readonly, nonatomic) MAFloatVector *label;

- (void).cxx_destruct;
- (id)initWithFloatVector:(id)a0 label:(id)a1;

@end
