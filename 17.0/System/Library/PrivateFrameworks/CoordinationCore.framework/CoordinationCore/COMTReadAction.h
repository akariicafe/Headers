@class COHomeKitAccessoryMemento;

@interface COMTReadAction : COMTTypedAction

@property (readonly, nonatomic) COHomeKitAccessoryMemento *memento;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithTargetType:(id)a0 targetMemento:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetType:(id)a0 targetMemento:(id)a1;

@end
