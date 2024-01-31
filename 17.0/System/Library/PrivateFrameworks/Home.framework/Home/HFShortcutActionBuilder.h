@interface HFShortcutActionBuilder : HFActionBuilder

+ (Class)homeKitRepresentationClass;

- (id)performValidation;
- (BOOL)isAffectedByEndEvents;
- (id)validationError;
- (id)createNewAction;
- (id)commitItem;
- (id)containedAccessoryRepresentables;

@end
