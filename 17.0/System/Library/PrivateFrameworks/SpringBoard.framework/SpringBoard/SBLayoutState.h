@class NSDictionary, NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding>

@property (nonatomic) long long interfaceOrientation;
@property (copy, nonatomic) NSDictionary *interfaceOrientationByLayoutElementIdentifier;
@property (readonly, nonatomic) NSSet *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)layoutContainsRole:(long long)a0;
- (id)appLayout;
- (long long)interfaceOrientationForLayoutElement:(id)a0;
- (id)init;
- (long long)interfaceOrientationForElementIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (long long)interfaceOrientationForLayoutRole:(long long)a0;
- (long long)_defaultInterfaceOrientation;
- (void)invalidateAppLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isMeaningfullyDifferentFromLayoutState:(id)a0;
- (BOOL)isEqual:(id)a0 withRole:(long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2;
- (id)succinctDescription;
- (void)invalidateFloatingAppLayout;
- (long long)_interfaceOrientationForElementIdentifier:(id)a0 unknownAllowed:(BOOL)a1;
- (long long)interfaceOrientationForLayoutElement:(id)a0 unknownAllowed:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)elementWithRole:(long long)a0;
- (id)floatingAppLayout;
- (id)elementWithIdentifier:(id)a0;

@end
