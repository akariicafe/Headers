@class TRASettingsActuationContext, NSString;

@interface TRAUserInterfaceStyleResolutionPolicyInfo : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) TRASettingsActuationContext *actuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActuationContext:(id)a0;

@end
