@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (id)verb;
- (Class)contentItemClass;
- (BOOL)deletesInput;
- (id)entityParameterName;
- (id)itemsBeingDeleted;
- (id)overrideDescriptionSummary;
- (id)overrideEntityName;
- (id)overrideLabelsByParameter;

@end
