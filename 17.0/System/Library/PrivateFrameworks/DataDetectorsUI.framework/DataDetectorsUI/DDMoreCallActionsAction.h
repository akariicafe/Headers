@interface DDMoreCallActionsAction : DDMoreActionsAction

+ (BOOL)isAvailable;

- (id)iconName;
- (id)variantIconName;
- (id)alertActions;
- (id)callProviderActions;

@end
