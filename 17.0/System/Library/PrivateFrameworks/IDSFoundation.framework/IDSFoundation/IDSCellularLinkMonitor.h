@class NSString, NSMutableDictionary, CTXPCServiceSubscriptionContext, NSHashTable, CoreTelephonyClient;
@protocol CoreTelephonyClientDataDelegate;

@interface IDSCellularLinkMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    id<CoreTelephonyClientDataDelegate> _ctClientDataDelegate;
    NSString *_dataIndicator;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
    unsigned int _remoteDeviceVersion;
}

@property (retain, nonatomic) CoreTelephonyClient *_ctClient;
@property (nonatomic) struct __CTServerConnection { } *_ctServerConnection;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *currentDataSubscriptionContextSync;
@property (readonly) BOOL dataUsable;
@property (readonly) NSString *cellularDataInterfaceName;
@property (readonly) unsigned int radioAccessTechnology;
@property (readonly) unsigned int cellularMTU;
@property (readonly) unsigned int dataSoMaskBits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)preferredDataSimChanged:(id)a0;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void).cxx_destruct;
- (void)_setupCTServerConnection;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (BOOL)_dataContextUsable:(id)a0 dataStatus:(id)a1;
- (id)_getCTXPCServiceSubscriptionContext;
- (id)_getCurrentDataSimContext:(id)a0 inContextArray:(id)a1;
- (id)_getDataStatus;
- (void)_notifyClientDataBearerSoMask:(id)a0;
- (BOOL)_updateCellularDataInterface:(BOOL)a0;
- (BOOL)_updateCellularDataInterfaceNameByConnectionState:(int)a0 isStateActiveRequired:(BOOL)a1 interfaceName:(id)a2;
- (BOOL)_updateCellularMTU;
- (BOOL)_updateDataBearerSoMask;
- (BOOL)_updateDataBearerSoMaskWithCTDataStatus:(id)a0;
- (void)_updateDataStatus;
- (BOOL)_updateRadioAccessTechnology;
- (BOOL)_updateRadioAccessTechnologyWithCTDataStatus:(id)a0;
- (void)addCellularLinkDelegate:(id)a0;
- (void)currentCellularSignalStrength:(int *)a0 signalStrength:(int *)a1 signalGrade:(int *)a2;
- (BOOL)dropIPPackets:(id)a0 localAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 isRelay:(BOOL)a3 channelNumberMSB:(unsigned char)a4;
- (void)processCTConnectionStateChangeNotification:(id)a0 connectionStatus:(id)a1;
- (void)registerCellularDataStatusNotification:(BOOL)a0;
- (void)removeCellularLinkDelegate:(id)a0;
- (void)removePacketNotificationFilter;
- (BOOL)setPacketNotificationFilter:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 remote:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 uniqueTag:(unsigned int)a2 callType:(unsigned char)a3;
- (void)setRemoteDeviceVersion:(unsigned int)a0;
- (void)updateProtocolQualityOfService:(BOOL)a0 localAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;

@end
