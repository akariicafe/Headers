@class NSString, NSDate;

@interface IMDMessageActiveDevice : NSObject

@property (retain, nonatomic) NSString *idsDestination;
@property (retain, nonatomic) NSDate *latestActiveDate;
@property (nonatomic) BOOL hasReceivedReadReceipt;
@property (retain, nonatomic) NSDate *latestReadReceipt;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasReceivedReadReceiptRecently;
- (id)initWithIDSDestination:(id)a0 latestDate:(id)a1 latestReadReceiptDate:(id)a2 hasReceivedReadReceipt:(BOOL)a3;
- (BOOL)shouldDisplayAttachmentDownloadFailure;
- (BOOL)shouldDisplayRemoteDecryptionFailure;
- (BOOL)shouldSendTypingIndicator;

@end
