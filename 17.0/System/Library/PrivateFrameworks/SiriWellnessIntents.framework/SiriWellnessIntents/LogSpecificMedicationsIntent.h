@class NSString, NSArray, NSDate, NSNumber;

@interface LogSpecificMedicationsIntent : INIntent

@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *medStatus;
@property (nonatomic, copy) NSDate *endTime;
@property (nonatomic, copy) NSString *scheduleID;
@property (nonatomic, copy) NSArray *medicationIDs;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, retain) NSNumber *isAsNeeded;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;
@property (nonatomic, retain) NSNumber *logAsNeeded;
@property (nonatomic, retain) NSNumber *confirmedAsNeeded;
@property (nonatomic, retain) NSNumber *confirmedAsScheduled;
@property (nonatomic, retain) NSNumber *hasMeridiem;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
