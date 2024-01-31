@class NSMutableArray;

@interface VCBitrateArbiter : NSObject {
    unsigned int _maxAllowedScreenShareBitrate2G;
    unsigned int _maxAllowedScreenShareBitrate3G;
    unsigned int _maxAllowedScreenShareBitrateLTE;
    unsigned int _maxAllowedScreenShareBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    unsigned int _maxiBitrateIPadCompanionP2P;
    unsigned int _maxAllowedBitrateIPadCompanionUSB;
    NSMutableArray *supportedBitrateRules;
}

@property (readonly) unsigned int maxAllowedBitrate;
@property (readonly) unsigned int maxAllowedBitrate2G;
@property (readonly) unsigned int maxAllowedBitrate3G;
@property (readonly) unsigned int maxAllowedBitrateLTE;
@property (readonly) unsigned int maxAllowedBitrateHighRat;
@property (readonly) unsigned int maxAllowedBitrateWifi;
@property (readonly) unsigned int maxAllowedBitrateP2P;
@property (readonly) unsigned int maxAllowedBitrateUSB;
@property (readonly) unsigned int maxAllowedBitrateTCPRelay;

+ (void)updateMaxAllowedBitratePerConnection:(unsigned int *)a0 connectionType:(int)a1 negotiatedSettings:(id)a2;

- (void)dealloc;
- (id)initWithDeviceRole:(int)a0 callLogFile:(void *)a1;
- (void)updateMaxAllowedBitrate:(unsigned int *)a0 key:(struct __CFString { } *)a1 type:(id)a2 isAudio:(BOOL)a3 carrierBundleBitrates:(struct __CFDictionary { } *)a4;
- (void)addRuleForBitrate:(unsigned int)a0 connectionType:(int)a1 limitingRule:(id)a2;
- (void)createSupportedBitrateRuleSets;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)a0;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)a0;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)a0 operatingMode:(int)a1;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)a0 forLocalInterface:(BOOL)a1;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)a0 forLocalInterface:(BOOL)a1 encodeRule:(id)a2;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)a0 forLocalInterface:(BOOL)a1 operatingMode:(int)a2 encodeRule:(id)a3;
- (id)maxAllowedBitrateRuleForConnection:(int)a0;
- (unsigned int)maxAllowedCellularBitrate;
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)a0;
- (unsigned int)maxAllowedScreenShareCellularBitrate;
- (void)readCarrierBundleValues;
- (void)readHardwareValues;
- (void)readStoreBagValues:(void *)a0;
- (int)storeBagBitrateForKey:(id)a0;
- (void)updateNegotiatedSettings:(id)a0;

@end
