@class NSString;

@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } *_network;
}

@property long long securityType;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (BOOL)isSecure;
- (void)setConfidence:(long long)a0;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (id)description;
- (double)signalStrength;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;

@end
