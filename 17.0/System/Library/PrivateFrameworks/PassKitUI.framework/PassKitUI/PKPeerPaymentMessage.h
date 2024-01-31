@class NSUUID, NSString, PKPeerPaymentRecurringPaymentMemo, PKPeerPaymentRequestToken, NSDate, PKProtobufPeerPaymentMessage, PKCurrencyAmount, NSDecimalNumber, MSMessage;

@interface PKPeerPaymentMessage : NSObject {
    PKProtobufPeerPaymentMessage *_protoMessage;
}

@property (readonly, nonatomic) MSMessage *underlyingMessage;
@property (readonly, nonatomic) BOOL hasBeenSent;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic) NSString *paymentIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *memo;
@property (copy, nonatomic) NSString *recurringPaymentIdentifier;
@property (copy, nonatomic) PKPeerPaymentRecurringPaymentMemo *recurringPaymentMemo;
@property (copy, nonatomic) NSDate *recurringPaymentStartDate;
@property (nonatomic) unsigned long long recurringPaymentFrequency;

- (id)init;
- (void)_updateSummaryText;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)_requestDeviceScoreIdentifier;
- (long long)recurringPaymentColor;
- (id)recurringPaymentEmoji;
- (id)_recurringPaymentSummaryTextWithAmount:(id)a0 memo:(id)a1;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (id)initWithType:(unsigned long long)a0 session:(id)a1;
- (id)initWithUnderlyingMessage:(id)a0;
- (void)reportMessageSent;
- (void)updateWithPeerPaymentPerformResponse:(id)a0;

@end
