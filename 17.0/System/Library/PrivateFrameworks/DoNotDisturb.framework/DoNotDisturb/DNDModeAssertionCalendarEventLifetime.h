@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *eventUniqueID;
@property (readonly, copy, nonatomic) NSDate *occurrenceDate;
@property (readonly, nonatomic, getter=isOnlyDuringEvent) BOOL onlyDuringEvent;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventUniqueID:(id)a0 occurrenceDate:(id)a1 onlyDuringEvent:(BOOL)a2;
- (unsigned long long)lifetimeType;

@end
