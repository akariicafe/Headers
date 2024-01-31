@class NSString;

@interface WFLinkQuality : NSObject <NSCopying>

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long rssi;
@property (nonatomic) float scaledRssi;

- (id)init;
- (id)initWithSSID:(id)a0 rssi:(long long)a1 scaledRSSI:(float)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
