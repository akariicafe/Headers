@class NSUUID, NSArray, NSDate;

@interface CLTripSegmentOutputData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *tripSegmentID;
@property (readonly, nonatomic) BOOL isFinalPart;
@property (readonly, nonatomic) long long modeOfTransport;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) double duration_s;
@property (nonatomic) double distance_m;
@property (nonatomic) double distanceUnc_m;
@property (readonly) NSArray *tripLocations;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(BOOL)a1 startDate:(id)a2 endDate:(id)a3 duration:(double)a4 modeOfTransport:(long long)a5 distance:(double)a6 distanceUnc:(double)a7 tripLocations:(id)a8;

@end
