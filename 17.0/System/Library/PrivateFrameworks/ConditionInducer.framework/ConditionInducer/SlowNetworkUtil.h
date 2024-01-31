@class NSNumber, NSString, NSData;

@interface SlowNetworkUtil : NSObject {
    struct { int version; int msg_type; struct { int flags; struct { unsigned int family; unsigned int exclude_loopback; char ifname[16]; } net_config; struct { unsigned int bandwidth; int bw_unit; float plr; unsigned int latency; unsigned int qsize; int qsize_unit; unsigned int protocol; unsigned int dst_port; unsigned int src_port; } uplink_config; struct { unsigned int bandwidth; int bw_unit; float plr; unsigned int latency; unsigned int qsize; int qsize_unit; unsigned int protocol; unsigned int dst_port; unsigned int src_port; } downlink_config; } nlc_conditions[2]; } nlcCommand;
    struct { unsigned int server_local_port; int cookie; } sessionCookie;
}

@property (readonly, nonatomic) NSNumber *excludeLoopback;
@property (readonly, nonatomic) NSNumber *dnsDelayValue;
@property (readonly, nonatomic) NSNumber *uplinkPacketLossRatio;
@property (readonly, nonatomic) NSNumber *uplinkBandwidth;
@property (readonly, nonatomic) NSNumber *uplinkDelay;
@property (readonly, nonatomic) NSNumber *downlinkPacketLossRatio;
@property (readonly, nonatomic) NSNumber *downlinkBandwidth;
@property (readonly, nonatomic) NSNumber *downlinkDelay;
@property (readonly, nonatomic) NSString *profileName;
@property (retain, nonatomic) NSData *profileData;

+ (id)loadNetworkProfilesData;

- (id)init;
- (void).cxx_destruct;
- (void)stopNLC;
- (void)extractProfileSetting:(id)a0;
- (void)loadProfile:(id)a0;
- (id)readInProfile:(id)a0;
- (void)startNLC;

@end
