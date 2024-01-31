@class NSData;

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long matchQuality;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } matchCoordinate;
@property (readonly, nonatomic) double matchCourse;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic, getter=isMatchShifted) BOOL matchShifted;
@property (readonly, copy, nonatomic) NSData *matchDataArray;

- (void)dealloc;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatchQuality:(long long)a0 matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 matchCourse:(double)a2 matchFormOfWay:(int)a3 matchRoadClass:(int)a4 matchShifted:(BOOL)a5 matchDataArray:(id)a6;
- (id)description;
- (id)initWithMatchQuality:(long long)a0 matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 matchCourse:(double)a2 matchFormOfWay:(int)a3 matchRoadClass:(int)a4 matchShifted:(BOOL)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
