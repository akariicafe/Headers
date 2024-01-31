@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double magneticHeading;
@property (readonly, nonatomic) double trueHeading;
@property (readonly, nonatomic) double headingAccuracy;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic) double z;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (void)dealloc;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithClientHeading:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
