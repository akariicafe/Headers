@class NSString, NSData, MFMailMessage;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    NSData *_messageData;
    MFMailMessage *_message;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithMessageData:(id)a0 parentPart:(id)a1;
- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)initWithMessage:(id)a0 managed:(BOOL)a1;
- (id)initWithMessageData:(id)a0 parentPart:(id)a1 managed:(BOOL)a2;
- (id)messageForAttachment:(id)a0;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;

@end
