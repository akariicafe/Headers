@class RTLocationOfInterest, NSString, RTLocation, NSUUID, NSDate, NSData, RTMapItem;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) RTLocation *location;
@property (copy, nonatomic) NSString *vehicleIdentifier;
@property (nonatomic) BOOL userSetLocation;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *photo;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (nonatomic) unsigned long long locationQuality;
@property (nonatomic) BOOL usualLocation;
@property (copy, nonatomic) RTLocationOfInterest *nearbyLocationOfInterest;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL locationFinalized;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 location:(id)a1 vehicleIdentifier:(id)a2 userSetLocation:(BOOL)a3 notes:(id)a4 identifier:(id)a5 photo:(id)a6 mapItem:(id)a7 confirmed:(BOOL)a8;

@end
