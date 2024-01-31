@class NSDate;

@interface FISleepUserDay : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startOfDay;
@property (copy, nonatomic) NSDate *endOfDay;

- (void)encodeWithCoder:(id)a0;
- (id)initEmptySleepUserDay;
- (id)initWithStartOfDay:(id)a0 endOfDay:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;

@end
