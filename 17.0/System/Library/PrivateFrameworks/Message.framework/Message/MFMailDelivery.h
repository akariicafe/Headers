@class MFMailMessage, ECHTMLStringAndMIMECharset, NSArray, MailAccount, NSDictionary, MFDeliveryResult, EMMessageObjectID, DeliveryAccount, MFMutableMessageHeaders, MFPlainTextDocument, EFFuture;

@interface MFMailDelivery : NSObject {
    id _delegate;
    MFMailMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    unsigned char _threaded : 1;
    unsigned char _useCellDataOnly : 1;
    EFFuture *_followUpFuture;
}

@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) BOOL isUserRequested;
@property (retain, nonatomic) EMMessageObjectID *originalMessageObjectID;
@property (retain, nonatomic) MFMailMessage *originalMessage;
@property (nonatomic) long long action;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;
@property (weak, nonatomic) id delegate;

+ (id)log;
+ (BOOL)deliverMessage:(id)a0;
+ (id)newWithMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
+ (id)newWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;

- (id)init;
- (id)message;
- (void)dealloc;
- (id)account;
- (void)setAccount:(id)a0;
- (void)archive;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (long long)deliveryStatus;
- (id)followUpWarning;
- (id)originalHeaders;
- (void)_checkAndApplyFollowUpToDeliveredMessage:(id)a0;
- (id)_htmlBodyForMessage:(id)a0;
- (id)archiveAccount;
- (void)deliverAsynchronously;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (id)deliverSynchronously;
- (id)deliveryResult;
- (id)headersForDelivery;
- (id)initWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
- (id)initWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)newMessageWriter;
- (void)setArchiveAccount:(id)a0;
- (void)setCellDataOnly:(BOOL)a0;
- (void)updateOriginalMessageFromHeaders:(id)a0;

@end
