@class NSArray, _INPBCurrencyAmountValue, _INPBUserActivity, NSString;

@interface _INPBRideCompletionStatus : PBCodable <_INPBRideCompletionStatus, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _feedbackTypes;
    struct { unsigned char canceled : 1; unsigned char canceledByService : 1; unsigned char completed : 1; unsigned char missedPickup : 1; unsigned char outstanding : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL canceledByService;
@property (nonatomic) BOOL hasCanceledByService;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL hasCompleted;
@property (retain, nonatomic) _INPBUserActivity *completionUserActivity;
@property (readonly, nonatomic) BOOL hasCompletionUserActivity;
@property (copy, nonatomic) NSArray *defaultTippingOptions;
@property (readonly, nonatomic) unsigned long long defaultTippingOptionsCount;
@property (readonly, nonatomic) int *feedbackTypes;
@property (readonly, nonatomic) unsigned long long feedbackTypesCount;
@property (nonatomic) BOOL missedPickup;
@property (nonatomic) BOOL hasMissedPickup;
@property (nonatomic) BOOL outstanding;
@property (nonatomic) BOOL hasOutstanding;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (readonly, nonatomic) BOOL hasPaymentAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)defaultTippingOptionsType;

- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedbackTypes:(id)a0;
- (void)addDefaultTippingOptions:(id)a0;
- (void)addFeedbackType:(int)a0;
- (void)clearDefaultTippingOptions;
- (void)clearFeedbackTypes;
- (id)defaultTippingOptionsAtIndex:(unsigned long long)a0;
- (int)feedbackTypeAtIndex:(unsigned long long)a0;
- (id)feedbackTypesAsString:(int)a0;
- (void)setFeedbackTypes:(int *)a0 count:(unsigned long long)a1;

@end
