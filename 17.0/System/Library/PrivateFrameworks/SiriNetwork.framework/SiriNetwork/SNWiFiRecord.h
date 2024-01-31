@class NSString, NSDate;

@interface SNWiFiRecord : NSObject

@property (nonatomic) long long rssi;
@property (nonatomic) long long snr;
@property (nonatomic) long long cca;
@property (copy, nonatomic) NSString *channelInfo;
@property (copy, nonatomic) NSString *phyMode;
@property (nonatomic) BOOL isCaptive;
@property (copy, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;

@end
