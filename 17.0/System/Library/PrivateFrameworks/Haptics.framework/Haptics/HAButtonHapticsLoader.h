@interface HAButtonHapticsLoader : NSObject

@property (readonly, nonatomic) long long maxNumberOfSlots;
@property (readonly, nonatomic) BOOL serviceAvailable;

+ (id)sharedInstance;

- (BOOL)loadButtonHapticOfType:(long long)a0 atSlot:(long long)a1 error:(id *)a2;
- (void)dealloc;
- (float)defaultUpGainForType:(long long)a0;
- (float)hapticGainForType:(long long)a0;
- (BOOL)hapticAssetType:(long long)a0 hasAudio:(BOOL *)a1 hasHaptic:(BOOL *)a2 error:(id *)a3;
- (float)audioGainForType:(long long)a0;
- (BOOL)loadButtonHapticOfType:(long long)a0 withParameters:(id)a1 atSlot:(long long)a2 error:(id *)a3;
- (float)defaultDownGainForType:(long long)a0;

@end
