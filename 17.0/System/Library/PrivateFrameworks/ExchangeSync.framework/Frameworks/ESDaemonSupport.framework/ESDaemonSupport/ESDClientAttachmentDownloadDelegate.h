@class NSString;

@interface ESDClientAttachmentDownloadDelegate : ESDClientDelegate <DAEventsAttachmentDownloadConsumer>

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) id downloadID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)downloadFinishedError:(id)a0;
- (void)beginDownload;
- (void)downloadProgressDownloadedByteCount:(long long)a0 totalByteCount:(long long)a1;
- (id)initWithAccountID:(id)a0 attachmentUUID:(id)a1 client:(id)a2;

@end
