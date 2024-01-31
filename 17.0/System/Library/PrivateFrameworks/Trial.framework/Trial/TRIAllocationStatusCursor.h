@class NSDate;

@interface TRIAllocationStatusCursor : NSObject <NSCopying, NSSecureCoding> {
    double _secondsFromEpoch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSecondsFromEpoch:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
