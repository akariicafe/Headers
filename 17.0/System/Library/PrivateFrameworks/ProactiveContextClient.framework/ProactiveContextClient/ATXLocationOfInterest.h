@class NSUUID, NSArray, NSString;

@interface ATXLocationOfInterest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *visits;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *city;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 visits:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 type:(long long)a3;
- (id)initWithUUID:(id)a0 visits:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void)addVisitFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)initWithUUID:(id)a0 visits:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 type:(long long)a3 city:(id)a4;

@end
