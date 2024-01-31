@class NSString, NSData;

@interface CTStewieRoadsideStartMessage : NSObject <CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long conversationID;
@property (nonatomic) long long providerId;
@property (nonatomic) BOOL isPayPerUse;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSData *serializedQuestionnaireAnswers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)estimatedSendTime;
- (BOOL)isEqualToRoadsideStartMessage:(id)a0;

@end
