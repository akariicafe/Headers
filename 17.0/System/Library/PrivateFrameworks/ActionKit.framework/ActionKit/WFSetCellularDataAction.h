@class NSArray;

@interface WFSetCellularDataAction : WFHandleCustomIntentAction

@property (nonatomic, readonly) NSArray *disabledOnPlatforms;

- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 intent:(id)a4 resolvedIntentDescriptor:(id)a5 stringLocalizer:(id)a6;

@end
