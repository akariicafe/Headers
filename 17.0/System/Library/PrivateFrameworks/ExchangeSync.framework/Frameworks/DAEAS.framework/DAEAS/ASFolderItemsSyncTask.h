@class NSString, NSArray, NSMutableSet, NSSet, ASMailMessage;

@interface ASFolderItemsSyncTask : ASTask <NSCopying>

@property (copy, nonatomic) NSString *folderID;
@property (retain, nonatomic) NSMutableSet *mRejectedServerIds;
@property (nonatomic) BOOL deletesAsMoves;
@property (nonatomic) BOOL hadFalseMoreAvailable;
@property (nonatomic) BOOL isSpinning;
@property (nonatomic) BOOL haveShortcut121Response;
@property (nonatomic) int numReplacedItems;
@property (nonatomic) int numDownloadedElements;
@property (copy, nonatomic) NSString *previousSyncKey;
@property (readonly, nonatomic) NSString *previousSyncKeyForAgent;
@property (nonatomic) long long dataclass;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL isInitialSync;
@property (nonatomic) BOOL isInitialBootstrapSync;
@property (nonatomic) BOOL willUpdate;
@property (nonatomic) BOOL moreAvailable;
@property (nonatomic) int bodyTruncationBytes;
@property (nonatomic) BOOL clientWinsOnSyncConflict;
@property (nonatomic, setter=setMIMESupport:) int mimeSupport;
@property (nonatomic) int filterDays;
@property (retain, nonatomic) ASMailMessage *streamingMailMessage;
@property (nonatomic) BOOL isResyncAfterConnectionFailed;
@property (readonly, nonatomic) NSSet *rejectedServerIds;
@property (retain, nonatomic) NSArray *preservedActions;
@property (retain, nonatomic) NSArray *pushedActions;
@property (nonatomic) BOOL moreLocalChangesAvailable;

- (double)percentComplete;
- (id)requestBody;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)bodyType;
- (void)reportStatusWithError:(id)a0;
- (void)_setSpinning:(BOOL)a0;
- (void)_handleChangedLeaf:(id)a0 addedChanges:(id)a1 modifiedChanges:(id)a2 removedChanges:(id)a3;
- (BOOL)processContext:(id)a0;
- (void)_addRejectedServerId:(id)a0;
- (int)_bodyTruncationCode;
- (void)_handleResponseToLeaf:(id)a0 addedResponses:(id)a1 modifiedResponses:(id)a2 removedResponses:(id)a3 fetchedResponses:(id)a4;
- (int)_mimeSupportCode;
- (int)_mimeTruncationCode;
- (void)appendActionData:(id)a0;
- (void)appendSupportedFieldsData:(id)a0;
- (BOOL)checkForErrorInContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)handleStreamOperation:(int)a0 forCodePage:(int)a1 tag:(int)a2 withParentItem:(id)a3 withData:(char *)a4 dataLength:(int)a5;
- (id)initWithFolderID:(id)a0;
- (id)initWithFolderID:(id)a0 deletesAsMoves:(BOOL)a1;
- (id)replacementObjectForEmailItem:(id)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
