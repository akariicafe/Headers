@class NSArray;

@interface SCLRecurrenceSchedule : SCLSchedule {
    NSArray *_recurrences;
}

+ (BOOL)supportsSecureCoding;
+ (void)performBlockWithSharedFormatter:(id /* block */)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recurrences;
- (id)initWithRecurrences:(id)a0;
- (id)initWithTimeIntervals:(id)a0 repeatSchedule:(long long)a1;

@end
