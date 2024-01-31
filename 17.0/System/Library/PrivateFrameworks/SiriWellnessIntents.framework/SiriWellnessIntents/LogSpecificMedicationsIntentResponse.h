@class NSNumber, NSArray, NSString;

@interface LogSpecificMedicationsIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *medCount;
@property (nonatomic, copy) NSArray *matchingMeds;
@property (nonatomic, copy) NSString *medName;
@property (nonatomic, copy) NSArray *matchingSchedules;
@property (nonatomic, copy) NSString *medSchedule;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;
@property (nonatomic, copy) NSArray *matchingMedsBeforeUpdate;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
