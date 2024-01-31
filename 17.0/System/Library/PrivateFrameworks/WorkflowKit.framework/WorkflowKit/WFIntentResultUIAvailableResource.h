@class INIntentDescriptor;

@interface WFIntentResultUIAvailableResource : WFResource

@property (readonly, nonatomic) INIntentDescriptor *resolvedIntentDescriptor;
@property (readonly, nonatomic) BOOL hasSuccessResponseWithDialog;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)initWithDefinition:(id)a0 resolvedIntentDescriptor:(id)a1 hasSuccessResponseWithDialog:(BOOL)a2;
- (void)refreshAvailability;

@end
