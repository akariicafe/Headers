@class NSString, NSArray;

@interface PKPayLaterPreliminaryAssessment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long productType;
@property (nonatomic, getter=isReapplication) BOOL reapplication;
@property (copy, nonatomic) NSArray *installmentPlans;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 productType:(unsigned long long)a1;

@end
