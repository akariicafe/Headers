@class NSDate, NSString, NSArray, IMSPIHandle, NSURL, NSAttributedString, PKCurrencyAmount, LPLinkMetadata;

@interface IMSPIMessage : NSObject

@property (readonly) BOOL allowedByScreenTime;
@property (retain) NSString *guid;
@property long long messageID;
@property long long itemType;
@property (retain) NSArray *chatGuids;
@property (retain) NSString *groupID;
@property (retain) NSString *chatIdentifier;
@property BOOL isGroupChat;
@property (retain) NSString *service;
@property (retain) NSString *text;
@property (retain) NSString *body;
@property (retain) NSString *summary;
@property (retain) NSAttributedString *attributedText;
@property (retain) NSString *subject;
@property (retain) NSString *effect;
@property (retain) NSString *displayName;
@property (retain) IMSPIHandle *sender;
@property (retain) NSArray *recipients;
@property (retain) NSDate *date;
@property (retain) NSDate *dateRead;
@property (retain) NSDate *dateForLastReadMessageInChat;
@property (retain) NSURL *extensionPayloadURL;
@property BOOL isOutgoing;
@property BOOL isRead;
@property BOOL isAudioMessage;
@property (retain) IMSPIMessage *referencedMessage;
@property (retain) NSString *bundleId;
@property long long messageType;
@property (retain) NSString *displayAppName;
@property (retain) LPLinkMetadata *richLinkMetadata;
@property (retain) PKCurrencyAmount *peerPaymentAmount;
@property (retain) NSArray *attachments;
@property BOOL hasDataDetectedResults;
@property (readonly) NSDate *lastReadDate;
@property (readonly) NSURL *url;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)spiChatWithQOS:(unsigned int)a0;

@end
