@class NSString, SXConditionalObjectResolver;
@protocol SXConditionValidationContextFactory, SXConditionalResolverModifierInstructions;

@interface SXDOMConditionResolverModifier : NSObject <SXDOMModifying>

@property (readonly, nonatomic) id<SXConditionValidationContextFactory> validationContextFactory;
@property (readonly, nonatomic) SXConditionalObjectResolver *componentResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *textStyleResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *componentStyleResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *componentLayoutResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *componentTextStyleResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *advertisementAutoPlacementResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *suggestedArticlesAutoPlacementResolver;
@property (readonly, nonatomic) SXConditionalObjectResolver *documentStyleResolver;
@property (readonly, nonatomic) id<SXConditionalResolverModifierInstructions> instructions;
@property (readonly, nonatomic) BOOL hasCheckedInstructions;
@property (readonly, nonatomic) BOOL resolveComponents;
@property (readonly, nonatomic) BOOL resolveComponentStyles;
@property (readonly, nonatomic) BOOL resolveComponentLayouts;
@property (readonly, nonatomic) BOOL resolveComponentTextStyles;
@property (readonly, nonatomic) BOOL resolveTextStyles;
@property (readonly, nonatomic) BOOL resolveAutoplacement;
@property (readonly, nonatomic) BOOL resolveDocumentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithValidationContextFactory:(id)a0 componentResolver:(id)a1 textStyleResolver:(id)a2 componentStyleResolver:(id)a3 componentLayoutResolver:(id)a4 componentTextStyleResolver:(id)a5 advertisementAutoPlacementResolver:(id)a6 suggestedArticlesAutoPlacementResolver:(id)a7 documentStyleResolver:(id)a8 instructions:(id)a9;
- (void)modifyDOM:(id)a0 context:(id)a1;
- (id)resolveAutoPlacement:(id)a0 validationContext:(id)a1;
- (BOOL)resolveComponentLayouts:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;
- (BOOL)resolveComponentStyles:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;
- (BOOL)resolveComponentTextStyle:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;
- (BOOL)resolveComponents:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;
- (id)resolveDocumentStyle:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;
- (BOOL)resolveTextStyles:(id)a0 conditionalObjectAnalysis:(id)a1 validationContext:(id)a2;

@end
