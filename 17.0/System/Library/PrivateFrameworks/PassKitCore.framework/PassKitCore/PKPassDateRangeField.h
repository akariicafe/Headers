@class NSString, NSDate;

@interface PKPassDateRangeField : PKPassDateField

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *displayableStartDate;
@property (copy, nonatomic) NSString *displayableEndDate;
@property (copy, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_displayableDate:(id)a0;
- (id)asMuteDictionary;

@end
