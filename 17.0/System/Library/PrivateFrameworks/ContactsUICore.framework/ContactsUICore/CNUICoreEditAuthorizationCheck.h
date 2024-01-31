@class CNContainer, CNContact;
@protocol CNUICoreParentContainerProvider, CNUICoreScreentimePasscodeCheck;

@interface CNUICoreEditAuthorizationCheck : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, nonatomic) id<CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;
@property (readonly, nonatomic) id<CNUICoreParentContainerProvider> linkedParentContainerProvider;

+ (id)log;
+ (BOOL)isAuthorizationPasscodeEnabledOnDevice;
+ (id)containerProviderWithContactStore:(id)a0;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2 linkedParentContainerProvider:(id)a3;
- (BOOL)shouldBypassRestrictionsGivenAuthorizationResult:(long long)a0;
- (BOOL)shouldPromptForPasscodeAuthorization;
- (BOOL)editAltersRestrictedInformation;
- (BOOL)authorizationPasscodeEnabledOnDevice;
- (BOOL)canPerformValidAuthorizationCheck;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2 screenTimePasscodeStatusCheck:(id)a3 linkedParentContainerProvider:(id)a4;
- (BOOL)shouldRespectParentalRestrictions;

@end
