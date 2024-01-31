@interface AlarmRepeatSchedule : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long repeatSchedule;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
