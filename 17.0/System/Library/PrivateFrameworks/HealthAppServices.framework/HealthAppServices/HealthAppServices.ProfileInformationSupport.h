@interface HealthAppServices.ProfileInformationSupport : NSObject

+ (id)localizedFullNameOrAccountIdentifierWithFirstName:(id)a0 lastName:(id)a1 isContact:(BOOL)a2 accountIdentifier:(id)a3 shouldDisplaySuggestedName:(BOOL)a4 newlineBetweenNames:(BOOL)a5;
+ (id)localizedShortNameOrAccountIdentifierWithFirstName:(id)a0 lastName:(id)a1 isContact:(BOOL)a2 accountIdentifier:(id)a3 shouldDisplaySuggestedName:(BOOL)a4 newlineBetweenNames:(BOOL)a5;

- (id)init;

@end
