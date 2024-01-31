@class NSURL, TUConversationActivity, NSDate, DDScannerResult, NSDictionary, IMBalloonPluginDataSource, NSString, NSAttributedString, NSArray, NSData, _SWCollaborationMetadata, CKShare, CKContainerSetupInfo;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (retain, nonatomic) NSString *pluginSessionGUID;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachments;
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL shouldHideAttachments;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (retain, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (retain, nonatomic) NSString *collaborationOptionsSummary;
@property (retain, nonatomic) NSURL *sendAsCopyURL;
@property (copy, nonatomic) NSString *sender;
@property (retain, nonatomic) CKShare *cloudKitShare;
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *breadcrumbText;
@property (retain, nonatomic) NSString *statusText;
@property (nonatomic, getter=isUpdate) BOOL update;
@property (nonatomic, getter=isSticker) BOOL sticker;
@property (nonatomic) BOOL shouldExpire;
@property (nonatomic) long long payloadCollaborationType;
@property (nonatomic) BOOL sendAsCopy;
@property (nonatomic) BOOL skipConfigurePlugin;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TUConversationActivity *groupActivity;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) NSArray *fileTransferGUIDs;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptPurgedTransfers;
- (void)addAttachmentsFromFilePaths:(id)a0;
- (id)initWithCoder:(id)a0 additionalAllowedClasses:(id)a1;
- (id)initWithMessageItem:(id)a0;
- (BOOL)isEqualToPluginPayload:(id)a0;
- (id)payloadDictionary;
- (void)addAttachmentsFromFileTransferGUIDs:(id)a0;
- (id)initWithMessageItem:(id)a0 chatContext:(id)a1;

@end
