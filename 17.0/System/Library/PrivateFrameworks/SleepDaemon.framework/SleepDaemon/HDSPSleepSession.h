@class NSArray, NSDictionary, NSDateInterval, NSString;

@interface HDSPSleepSession : NSObject <BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) NSArray *sleepIntervals;
@property (readonly, nonatomic) unsigned long long endReason;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) BOOL requiresFirstUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sleepSessionWithDateInterval:(id)a0 sleepIntervals:(id)a1 endReason:(unsigned long long)a2 metadata:(id)a3 requiresFirstUnlock:(BOOL)a4;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 sleepIntervals:(id)a1 endReason:(unsigned long long)a2 metadata:(id)a3 requiresFirstUnlock:(BOOL)a4;

@end
