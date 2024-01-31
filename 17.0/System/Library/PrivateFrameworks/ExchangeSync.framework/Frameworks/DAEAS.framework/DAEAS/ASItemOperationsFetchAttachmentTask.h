@class NSString, NSError, NSFileHandle;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol>

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSString *attachmentContentType;
@property (nonatomic) unsigned long long localFileLength;
@property (retain, nonatomic) NSFileHandle *localFileHandle;
@property (retain, nonatomic) NSError *writeAttachmentError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)handleStreamOperation:(int)a0 forCodePage:(int)a1 tag:(int)a2 withParentItem:(id)a3 withData:(char *)a4 dataLength:(int)a5;
- (id)initForMessageServerID:(id)a0 andAttachmentName:(id)a1;
- (id)initForMessageUUID:(id)a0;

@end
