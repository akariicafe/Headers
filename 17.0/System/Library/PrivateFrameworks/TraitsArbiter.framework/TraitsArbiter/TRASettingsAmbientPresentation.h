@class NSString, TRAArbitrationAmbientPresentationInputs;

@interface TRASettingsAmbientPresentation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (readonly, nonatomic) TRAArbitrationAmbientPresentationInputs *ambientPresentationInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAmbientPresentationInputs:(id)a0;
- (id)initWithAmbientPresentationSettings:(id)a0;
- (BOOL)isEqualToAmbientPresentationSettings:(id)a0;

@end
