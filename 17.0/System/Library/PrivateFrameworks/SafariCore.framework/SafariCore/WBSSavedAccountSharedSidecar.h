@class NSString, NSDictionary, NSURLProtectionSpace, WBSTOTPGenerator;

@interface WBSSavedAccountSharedSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar>

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (copy, nonatomic) NSString *originalContributorParticipantID;
@property (copy, nonatomic) NSString *participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
@property (readonly, nonatomic) NSDictionary *prefixedSharableData;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonalSidecar:(id)a0;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2;

@end
