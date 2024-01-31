@class NSString, NSNumber, NSUUID;

@interface MatchedMedName : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *schedule;
@property (nonatomic, copy) NSString *scheduleID;
@property (nonatomic, copy) NSString *medicationID;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;
@property (nonatomic, retain) NSNumber *isScheduled;
@property (nonatomic, copy) NSString *completionStatus;
@property (nonatomic, copy) NSString *loggedTime;
@property (nonatomic, copy) NSUUID *persistedUUID;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
