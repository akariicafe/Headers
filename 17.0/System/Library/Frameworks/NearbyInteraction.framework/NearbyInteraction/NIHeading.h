@class NSDate;

@interface NIHeading : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double trueHeading;
@property (nonatomic) double magneticHeading;
@property (nonatomic) double headingAccuracy;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0 trueHeading:(double)a1 magneticHeading:(double)a2 headingAccuracy:(double)a3;

@end
