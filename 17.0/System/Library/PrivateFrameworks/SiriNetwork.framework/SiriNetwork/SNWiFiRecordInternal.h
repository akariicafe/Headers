@class NSString, NSDate;

@interface SNWiFiRecordInternal : NSObject {
    void /* unknown type, empty encoding */ channelInfo;
    void /* unknown type, empty encoding */ phyMode;
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ rssi;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ snr;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cca;
@property (nonatomic, readonly) NSString *channelInfo;
@property (nonatomic, readonly) NSString *phyMode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isCaptive;
@property (nonatomic, readonly) NSDate *timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRssi:(long long)a0 snr:(long long)a1 cca:(long long)a2 channelInfo:(id)a3 phyMode:(id)a4 isCaptive:(BOOL)a5 timestamp:(id)a6;

@end
