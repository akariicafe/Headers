@class VCAudioTier, NSMutableDictionary, BitrateLimits;

@interface VCAudioTierPicker : NSObject {
    NSMutableDictionary *_tierTablesForRedNumPayloads;
    VCAudioTier *_fallbackTier;
    BitrateLimits *_bitrateLimits;
    NSMutableDictionary *_tierTablePlist;
}

@property struct { unsigned char mode; struct __CFArray *supportedAudioPayloadConfigs; struct __CFArray *supportedPacketsPerBundle; struct __CFArray *supportedRedNumPayloads; unsigned int headerSize; BOOL usingCellular; BOOL isUseCaseWatchContinuity; unsigned int defaultMaxCap; BOOL alwaysOnAudioRedundancyEnabled; BOOL cellularAllowRedLowBitratesEnabled; BOOL wifiAllowRedLowBitratesEnabled; BOOL isIPv4; } config;
@property (readonly) VCAudioTier *defaultTier;

+ (BOOL)arrayHasObject:(id)a0 withPayloadType:(int)a1;
+ (id)allPossibleCombinations:(id)a0 supportedPacketsPerBundle:(id)a1 redNumPayloads:(unsigned int)a2 headerSize:(unsigned int)a3 tierPickerMode:(unsigned char)a4 usingCellular:(BOOL)a5 useCaseWatchContinuity:(BOOL)a6;
+ (BOOL)isModeAudioOnly:(unsigned char)a0;
+ (BOOL)isModeAudioVideo:(unsigned char)a0;
+ (BOOL)isModePlistSupported:(unsigned char)a0;
+ (BOOL)isModeV2:(unsigned char)a0;
+ (BOOL)loadVCAudioTierFromTierTable:(id)a0 bitrate:(unsigned int)a1 redNumPayloads:(unsigned int)a2 outEntry:(struct tagVCAudioTierPickerPlistEntry { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a3;
+ (BOOL)loadVCAudioTierFromTierTable:(id)a0 mode:(unsigned char)a1 isIPv4:(BOOL)a2 cellular:(BOOL)a3 redNumPayloads:(unsigned int)a4 tierBitrate:(unsigned int)a5 outEntry:(struct tagVCAudioTierPickerPlistEntry { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a6;
+ (unsigned char)operatingModeToTierPickerMode:(int)a0 preferPlistForTierTable:(BOOL)a1;
+ (id)selectHighestQualityAudioTiers:(id)a0 forBitrateLimits:(id)a1 isHardLimit:(BOOL)a2;
+ (BOOL)shouldFilterTierForPayloadConfig:(id)a0 bitRate:(unsigned int)a1 packetsPerBundle:(unsigned int)a2 mode:(unsigned char)a3 redNumPayloads:(unsigned int)a4 cellular:(BOOL)a5;
+ (int)tierPickerModeToAVConferenceOperatingMode:(unsigned char)a0;
+ (BOOL)usePlistForAudioTierTableFromMode:(unsigned char)a0;
+ (id)valueForNetworkBitrate:(id)a0 networkBitrate:(unsigned int)a1;

- (id)initWithConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (void)dealloc;
- (id)configToString:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (id)allAudioTiers;
- (id)chooseMultiwayAudioTierForRedPayload:(unsigned long long)a0;
- (id)generateAudioTiersDictFromPlistForBitrateLimits:(id)a0 tierPickerConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a1 redNumPayloads:(unsigned int)a2;
- (id)loadAudioTiersFromPlist:(id)a0;
- (void)logTierPickerConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (void)printCreatedAudioTiers:(id)a0;
- (BOOL)reconfigureTierPicker:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)a0 usingCellular:(BOOL)a1;
- (BOOL)setupTierPickerForConfig:(struct { unsigned char x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })a0;
- (id)tierForAudioBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withLegacyDuplication:(int)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;

@end
