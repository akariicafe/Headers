@class NSUUID, NSArray, CLTripSegmentLocation;

@interface CLTripSegmentInputData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *tripSegmentID;
@property (readonly, nonatomic) BOOL isFinalPart;
@property (readonly, nonatomic) long long modeOfTransport;
@property (readonly) NSArray *inertialData;
@property (readonly) NSArray *tripLocations;
@property (readonly) CLTripSegmentLocation *startTripLocation;
@property (readonly) CLTripSegmentLocation *stopTripLocation;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(BOOL)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(BOOL)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3 startTripLocation:(id)a4 stopTripLocation:(id)a5 inertialData:(id)a6;

@end
