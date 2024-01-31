@class CLLocation, NSString, WFGeocodeRequest, UIImage, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WeatherAQIAttribution : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long dataOrigination;
@property (retain, nonatomic) NSString *stationLocationName;
@property (retain, nonatomic) WFGeocodeRequest *geocodeRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reverseGeocodingQueue;
@property (readonly, nonatomic) UIImage *cachedLogoImage;
@property (readonly, nonatomic) NSDate *stationLastReadDate;
@property (readonly, nonatomic) CLLocation *stationLocation;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (id)initWithFoundationAttribution:(id)a0;
- (void)reverseGeocodeStationLocation:(id /* block */)a0;

@end
