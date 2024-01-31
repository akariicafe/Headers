@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {
    NSString *_messageIDHeader;
    NSString *_folderID;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (void).cxx_destruct;
- (unsigned long long)generationNumber;
- (id)initWithMessage:(id)a0 mailbox:(id)a1;

@end
