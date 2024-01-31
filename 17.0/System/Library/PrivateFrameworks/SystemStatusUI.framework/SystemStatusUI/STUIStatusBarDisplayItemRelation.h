@class NSArray, NSString;

@interface STUIStatusBarDisplayItemRelation : NSObject <BSDebugDescriptionProviding>

@property (readonly, nonatomic, getter=isFulfilled) BOOL fulfilled;
@property (readonly, nonatomic) NSArray *itemStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requirementWithDisplayItemState:(id)a0 placement:(id)a1;
+ (id)allRelationWithRelations:(id)a0;
+ (id)exclusionWithDisplayItemState:(id)a0 placement:(id)a1;
+ (id)anyRelationWithRelations:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)type;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
