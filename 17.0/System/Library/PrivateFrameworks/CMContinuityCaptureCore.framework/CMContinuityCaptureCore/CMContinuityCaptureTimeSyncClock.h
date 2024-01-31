@class NSString, NSObject, TSgPTPClock;
@protocol OS_dispatch_source;

@interface CMContinuityCaptureTimeSyncClock : NSObject <TSClockClient> {
    TSgPTPClock *_ptpClock;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) unsigned long long grandMasterIdentifier;
@property (retain, nonatomic) NSString *clockDeviceUID;
@property (readonly, nonatomic, getter=isConnectedToPeer) BOOL connectedToPeer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithClock:(id)a0;
- (void).cxx_destruct;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)startEmittingHeartBeatSignposts;
- (unsigned long long)domainTimeForMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)machAbsoluteTimeForDomainTime:(unsigned long long)a0;
- (void)stopEmittingHeartBeatSignposts;

@end
