@class NSString, NSDate;

@interface HAENGeoLocation : NSObject

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int source;
@property (readonly, nonatomic) unsigned int sourceDevice;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *immutableDescription;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)describeSource;
- (void)fetchGeoLocation;

@end
