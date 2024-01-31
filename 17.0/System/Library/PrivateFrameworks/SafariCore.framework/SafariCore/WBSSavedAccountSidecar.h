@class WBSTOTPGenerator, NSString, NSDictionary, NSMutableDictionary, NSDate, NSURLProtectionSpace, WBSPasswordWarningHideMarker;

@interface WBSSavedAccountSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar> {
    NSDictionary *_originalKeychainDictionary;
    NSMutableDictionary *_contextSpecificData;
}

@property (copy, nonatomic) NSString *customTitle;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey;
@property (readonly, nonatomic) NSDictionary *contextSpecificData;
@property (retain, nonatomic) NSDate *lastRecentlyDeletedNotificationDate;
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
- (void)adoptSharableDataFromSharedSidecar:(id)a0;
- (id)initWithSharedSidecar:(id)a0;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2;
- (id)lastUsedDateForContext:(id)a0;
- (void)removeSharableData;
- (void)setLastUsedDate:(id)a0 forContext:(id)a1;

@end
