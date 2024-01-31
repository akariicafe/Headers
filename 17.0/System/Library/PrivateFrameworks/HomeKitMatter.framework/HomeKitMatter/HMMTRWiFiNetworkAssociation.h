@class NSData;

@interface HMMTRWiFiNetworkAssociation : NSObject

@property (readonly, nonatomic) NSData *ssid;
@property (readonly, nonatomic) NSData *credentials;

- (void).cxx_destruct;
- (id)initWithSSID:(id)a0 credentials:(id)a1;

@end
