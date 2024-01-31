@class NSString;

@interface AMSFraudReportResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *nameSpace;
@property (nonatomic) long long reportedScore;
@property (nonatomic) long long newScore;
@property (retain, nonatomic) NSString *proof;
@property (retain, nonatomic) NSString *evaluatedElement;
@property (retain, nonatomic) NSString *finalizedElement;
@property (retain, nonatomic) NSString *keyID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 keyID:(id)a1;
- (id)initWithURLResult:(id)a0 keyID:(id)a1;

@end
