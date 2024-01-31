@class NSString, NSDate;
@protocol WiFiCandidateNetwork, WiFiScannedNetwork;

@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation>

@property (retain, nonatomic) id<WiFiScannedNetwork> scannedNetwork;
@property (retain, nonatomic) NSDate *matchedAt;
@property (nonatomic) BOOL unwantedNetworkName;
@property (readonly, copy, nonatomic) NSString *SSID;
@property (readonly, nonatomic) id<WiFiCandidateNetwork> network;
@property (readonly, nonatomic) long long priority;

+ (id)matchWithNetwork:(id)a0 scannedNetwork:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNetwork:(id)a0 scannedNetwork:(id)a1;
- (BOOL)isEqualToAvailabilityMatch:(id)a0;
- (BOOL)isEqualToScannedNetwork:(id)a0;

@end
