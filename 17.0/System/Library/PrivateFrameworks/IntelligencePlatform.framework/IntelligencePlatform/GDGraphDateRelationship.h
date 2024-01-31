@class NSArray, NSString, NSDate;

@interface GDGraphDateRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSDate *occurrenceDate;
@property (readonly, copy, nonatomic) NSArray *allStartDate;
@property (readonly, copy, nonatomic) NSArray *allEndDate;
@property (readonly, copy, nonatomic) NSArray *allOccurrenceDate;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStartDateField:(id)a0 endDateField:(id)a1 occurrenceDateField:(id)a2 allStartDateField:(id)a3 allEndDateField:(id)a4 allOccurrenceDateField:(id)a5;

@end
