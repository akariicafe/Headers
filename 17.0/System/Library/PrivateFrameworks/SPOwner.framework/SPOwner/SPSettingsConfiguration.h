@class NSUUID, NSString, NSDate, NSUserDefaults, NSSet, NSOperationQueue, FMXPCSession, NSObject, NSNumber, FMXPCServiceDescription;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating>

@property (readonly, copy, nonatomic) NSUUID *baUUID;
@property (readonly, copy, nonatomic) NSString *serviceState;
@property (readonly, copy, nonatomic) NSSet *serviceDisabledReasons;
@property (readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property (readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property (readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy;
@property (weak, nonatomic) id serviceSettingsChangedNotificationToken;
@property (retain, nonatomic) NSOperationQueue *notificationQueue;
@property (retain, nonatomic) NSUserDefaults *sharedDefaults;
@property (copy, nonatomic) NSString *serviceState;
@property (copy, nonatomic) NSSet *serviceDisabledReasons;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)beginRefreshingServiceStateWithBlock:(id /* block */)a0;
- (id)serviceSettingsConfiguration;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)setServiceState:(id)a0 completion:(id /* block */)a1;

@end
