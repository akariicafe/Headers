@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *descriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;
+ (id)defaultFocusPredicate;
+ (id)defaultSystemPredicate;

- (id)init;
- (void)setDescriptors:(id)a0;
- (void)setDisplays:(id)a0;
- (void)setSenderDescriptors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
