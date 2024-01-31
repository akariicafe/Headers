@class NSString;

@interface CVACMWiFiData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *BSSID;
@property (nonatomic) int RSSI;
@property (nonatomic) int channel;
@property (nonatomic) double timestamp;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
