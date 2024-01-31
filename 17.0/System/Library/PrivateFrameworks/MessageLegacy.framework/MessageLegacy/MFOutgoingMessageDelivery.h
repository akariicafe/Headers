@class MFAttachmentCompositionContext, NSString, NSArray, MFMessage, MFMailDelivery, MFPlainTextDocument, NSDictionary, MailAccount, DeliveryAccount, MFMutableMessageHeaders;
@protocol MFDeliveryDelegate;

@interface MFOutgoingMessageDelivery : NSObject {
    MFMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    NSArray *_charsets;
    id<MFDeliveryDelegate> _delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    MFMailDelivery *_currentDeliveryObject;
}

@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) long long originalConversationId;
@property (nonatomic) BOOL isUserRequested;

+ (id)newWithMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
+ (id)newWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;

- (id)init;
- (id)message;
- (void)dealloc;
- (id)account;
- (void)setAccount:(id)a0;
- (id)initWithMessage:(id)a0;
- (void)setDelegate:(id)a0;
- (long long)deliveryStatus;
- (id)_deliveryAccountForInitializers;
- (id)originalHeaders;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(BOOL)a0;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)a0;
- (id)initWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (void)setArchiveAccount:(id)a0;
- (id)initWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;

@end
