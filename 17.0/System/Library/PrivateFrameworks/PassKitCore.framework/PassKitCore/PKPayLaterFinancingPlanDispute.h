@class NSString, NSArray, NSDate;

@interface PKPayLaterFinancingPlanDispute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSDate *openDate;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSDate *deadlineDate;
@property (copy, nonatomic) NSString *emailAddress;
@property (nonatomic) unsigned long long requiredDocuments;
@property (copy, nonatomic) NSArray *appliedPayments;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isTerminal;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPayLaterFinancingPlanDispute:(id)a0;

@end
