@class NSDate;

@interface WFDetectedDate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL timeIsSignificant;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 timeIsSignificant:(BOOL)a1;
- (id)initWithDateCheckingResult:(id)a0;

@end
