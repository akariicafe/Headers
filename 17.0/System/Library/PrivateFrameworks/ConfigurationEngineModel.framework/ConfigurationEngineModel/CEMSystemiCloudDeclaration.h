@class NSSet, NSString, NSNumber;

@interface CEMSystemiCloudDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowCloudBackup;
@property (copy, nonatomic) NSNumber *payloadAllowCloudDocumentSync;
@property (copy, nonatomic) NSNumber *payloadAllowFindMyFriendsModification;
@property (copy, nonatomic) NSNumber *payloadAllowPhotoStream;
@property (copy, nonatomic) NSNumber *payloadAllowSharedStream;
@property (copy, nonatomic) NSNumber *payloadAllowCloudPhotoLibrary;
@property (copy, nonatomic) NSNumber *payloadAllowCloudBookmarks;
@property (copy, nonatomic) NSNumber *payloadAllowCloudMail;
@property (copy, nonatomic) NSNumber *payloadAllowCloudCalendar;
@property (copy, nonatomic) NSNumber *payloadAllowCloudReminders;
@property (copy, nonatomic) NSNumber *payloadAllowCloudAddressBook;
@property (copy, nonatomic) NSNumber *payloadAllowCloudNotes;
@property (copy, nonatomic) NSNumber *payloadAllowCloudDesktopAndDocuments;
@property (copy, nonatomic) NSNumber *payloadAllowCloudKeychainSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowCloudBackup:(id)a1 withAllowCloudDocumentSync:(id)a2 withAllowFindMyFriendsModification:(id)a3 withAllowPhotoStream:(id)a4 withAllowSharedStream:(id)a5 withAllowCloudPhotoLibrary:(id)a6 withAllowCloudBookmarks:(id)a7 withAllowCloudMail:(id)a8 withAllowCloudCalendar:(id)a9 withAllowCloudReminders:(id)a10 withAllowCloudAddressBook:(id)a11 withAllowCloudNotes:(id)a12 withAllowCloudDesktopAndDocuments:(id)a13 withAllowCloudKeychainSync:(id)a14;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
