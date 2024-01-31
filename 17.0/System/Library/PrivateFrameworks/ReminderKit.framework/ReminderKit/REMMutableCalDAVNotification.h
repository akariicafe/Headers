@class NSString, NSURL;

@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>

@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSURL *hostURL;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;


@end
