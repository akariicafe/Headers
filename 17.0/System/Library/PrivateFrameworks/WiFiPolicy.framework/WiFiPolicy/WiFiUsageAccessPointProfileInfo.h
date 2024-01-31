@class NSString, NSDictionary, NSData;

@interface WiFiUsageAccessPointProfileInfo : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSDictionary *apProfileWPSInfo;
@property (retain, nonatomic) NSString *apProfileVersion;
@property (retain, nonatomic) NSString *apProfile_shortID;
@property (retain, nonatomic) NSString *apProfileID;
@property (retain, nonatomic) NSData *beacon;

- (void).cxx_destruct;

@end
