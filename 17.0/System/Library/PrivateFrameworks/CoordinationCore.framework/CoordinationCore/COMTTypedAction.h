@class NSString;

@interface COMTTypedAction : COMTAction

@property (readonly, nonatomic) NSString *targetType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)initWithCoder:(id)a0;

@end
