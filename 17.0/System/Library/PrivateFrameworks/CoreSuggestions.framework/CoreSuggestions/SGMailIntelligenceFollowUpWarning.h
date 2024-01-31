@class NSString, NSNumber, NSDate;

@interface SGMailIntelligenceFollowUpWarning : SGMailIntelligenceWarning

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *startDateCore;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *endDateCore;
@property (retain, nonatomic) NSNumber *type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNSDictionary:(id)a0;
- (id)initWithNSData:(id)a0;
- (id)initWithSnippet:(id)a0 core:(id)a1 signature:(id)a2 detectedLanguage:(id)a3 isIncomingMessage:(BOOL)a4 score:(id)a5 startDate:(id)a6 startDateCore:(id)a7 endDate:(id)a8 endDateCore:(id)a9;
- (id)toLightJson;
- (id)toLightNSData;
- (id)toLightNSDictionary;

@end
