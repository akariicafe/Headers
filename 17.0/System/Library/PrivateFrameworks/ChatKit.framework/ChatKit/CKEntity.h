@class IMHandle, CNContact, IMChat, IMAccount, NSString, UIImage;

@interface CKEntity : NSObject

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMAccount *chatAccount;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) CNContact *cnContact;
@property (readonly, nonatomic) IMHandle *defaultIMHandle;
@property (readonly, nonatomic) NSString *propertyType;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, copy, nonatomic) NSString *abbreviatedDisplayName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *rawAddress;
@property (readonly, copy, nonatomic) NSString *originalAddress;
@property (readonly, copy, nonatomic) NSString *IDSCanonicalAddress;
@property (readonly, copy, nonatomic) NSString *textToneIdentifier;
@property (readonly, copy, nonatomic) NSString *textVibrationIdentifier;
@property (readonly, nonatomic) UIImage *transcriptContactImage;
@property (readonly, nonatomic) UIImage *transcriptDrawerContactImage;
@property (readonly, nonatomic) UIImage *locationMapViewContactImage;
@property (readonly, nonatomic) UIImage *locationShareBalloonContactImage;
@property (nonatomic) BOOL enlargedContactImage;

+ (id)_copyEntityForAddressString:(id)a0 onAccount:(id)a1;
+ (id)copyEntityForAddressString:(id)a0;
+ (id)entityForAddress:(id)a0;
+ (BOOL)string:(id)a0 hasPrefix:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_allowedByScreenTime;
- (id)_croppedImageFromImageData:(id)a0;
- (void)_invalidateContactStoreCache:(id)a0;
- (void)_invalidatePartialContactStoreCache:(id)a0;
- (void)_setBusinessInfoForMutableContact:(id)a0 enlargedImageData:(id)a1;
- (void)addToken:(id)a0 ifAvailableToTokens:(id)a1;
- (id)cnContactWithKeys:(id)a0;
- (id)cnContactWithKeys:(id)a0 shouldFetchSuggestedContact:(BOOL)a1;
- (id)displayNameMatchingInputText:(id)a0;
- (id)initWithChat:(id)a0 imHandle:(id)a1;
- (id)initWithIMHandle:(id)a0;
- (BOOL)isMentionable;
- (id)mentionTokens;
- (id)mentionsHandleID;
- (id)personViewControllerWithDelegate:(id)a0 isUnknown:(BOOL *)a1;
- (id)personViewControllerWithDelegate:(id)a0 isUnknown:(BOOL *)a1 contactStoreProvider:(id)a2;
- (id)pinnedConversationContactItemIdentifier;

@end
