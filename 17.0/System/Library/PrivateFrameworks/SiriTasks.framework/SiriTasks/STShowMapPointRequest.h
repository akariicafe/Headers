@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

@property (nonatomic) BOOL isCurrentLocation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithPlaceData:(id)a0 extSessionGuid:(id)a1 extSessionGuidCreatedTimestamp:(id)a2;
- (id)mapPointData;

@end
