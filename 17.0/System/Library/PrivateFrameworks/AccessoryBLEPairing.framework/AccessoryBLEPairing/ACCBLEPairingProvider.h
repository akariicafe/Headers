@class NSString;
@protocol ACCBLEPairingProviderProtocol;

@interface ACCBLEPairingProvider : NSObject

@property (retain, nonatomic) NSString *delegateUUID;
@property (weak, nonatomic) id<ACCBLEPairingProviderProtocol> delegate;
@property (nonatomic) int lastScorpiusDetectType;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)devicePairingData:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairData:(id)a3;
- (void)deviceStateUpdate:(id)a0 blePairingUUID:(id)a1 bRadioOn:(BOOL)a2 pairState:(int)a3 bPairModeOn:(BOOL)a4;
- (void)deviceUpdatePairingInfo:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairInfo:(id)a3;
- (void)startBLEUpdates:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 bRadioUpdatesOn:(BOOL)a3 bPairInfoUpdatesOn:(BOOL)a4;
- (void)stopBLEUpdates:(id)a0 blePairingUUID:(id)a1;

@end
