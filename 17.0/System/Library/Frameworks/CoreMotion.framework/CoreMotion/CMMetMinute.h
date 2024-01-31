@class NSNumber, NSDate;

@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSNumber *fAverageIntensity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSNumber *averageIntensity;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSample:(struct CLMetMinute { double x0; double x1; })a0;
- (id)initWithStartDate:(id)a0 averageIntensity:(id)a1;

@end
