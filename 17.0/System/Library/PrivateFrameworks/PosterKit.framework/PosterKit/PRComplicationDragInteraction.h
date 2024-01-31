@class PRComplicationDescriptor;

@interface PRComplicationDragInteraction : UIDragInteraction

@property (readonly, nonatomic) PRComplicationDescriptor *complicationDescriptor;

+ (BOOL)isEnabledByDefault;

- (id)initWithDelegate:(id)a0 complicationDescriptor:(id)a1;
- (void).cxx_destruct;

@end
