@class NSArray, NSDate;

@interface CTCAServiceIntervals : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startsAt;
@property (retain, nonatomic) NSDate *endsAt;
@property (nonatomic) BOOL atStart;
@property (retain, nonatomic) NSArray *changesAt;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
