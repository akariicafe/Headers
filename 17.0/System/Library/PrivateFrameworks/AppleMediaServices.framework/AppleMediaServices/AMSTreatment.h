@class NSDictionary, NSString, NSDate;

@interface AMSTreatment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *startDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndDate:(id)a0 identifier:(id)a1 startDate:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
