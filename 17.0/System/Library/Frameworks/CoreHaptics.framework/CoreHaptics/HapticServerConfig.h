@class NSString;

@interface HapticServerConfig : NSObject

@property (readonly) BOOL usingInternalHaptics;
@property (readonly) BOOL supportsAudioPlayback;
@property (readonly) BOOL supportsHapticPlayback;
@property (readonly) BOOL supportsAdvancedPatternPlayers;
@property (readonly) float hapticContinuousTimeLimit;
@property (readonly) NSString *currentLocality;
@property (readonly) float defaultHapticTransientEventSharpness;
@property (readonly) float defaultHapticContinuousEventSharpness;
@property (readonly) float defaultHapticTransientEventIntensity;
@property (readonly) float defaultHapticContinuousEventIntensity;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticTransientIDs;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticContinuousSustainedIDs;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticContinuousNonsustainedIDs;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHapticPlayer:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
