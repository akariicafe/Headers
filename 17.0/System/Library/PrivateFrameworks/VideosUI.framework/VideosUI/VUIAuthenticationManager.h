@class UIImage, AAUIProfilePictureStore, AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;
@property (readonly, nonatomic) AAUIProfilePictureStore *_profilePictureStore;
@property (readonly, nonatomic) UIImage *_profileImage;
@property (nonatomic) BOOL _isLibraryOnlyCountry;
@property (nonatomic) BOOL _isLibraryOnlyCountryResolved;

+ (id)sharedInstance;
+ (id)DSID;
+ (BOOL)isDemoAccount;
+ (id)userFullName;
+ (id)identifier;
+ (BOOL)allowsAccountModification;
+ (id)creditsString;
+ (id)storefrontId;
+ (id)_profileImage;
+ (id)_userAccount;
+ (id)userAccountName;
+ (BOOL)_isLibraryOnlyCountry;
+ (BOOL)_isLibraryOnlyCountryResolved;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (BOOL)isLibraryOnlyCountry;
+ (BOOL)isLibraryOnlyCountryResolved;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;
+ (id)userFirstName;
+ (BOOL)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void)_networkReachabilityDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;
- (void)_determineIfLibraryOnlyCountry;
- (void)_fetchProfileImage;
- (void)_setUpProfileImageStoreAndFetchProfileImage;

@end
