@interface TSDgPTPLocalClockPort : TSDgPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (int)portType;
- (BOOL)_hasLocalFrequencyStabilityLower;
- (BOOL)_hasLocalFrequencyStabilityUpper;
- (BOOL)_hasLocalFrequencyToleranceLower;
- (BOOL)_hasLocalFrequencyToleranceUpper;
- (int)_localFrequencyStabilityLower;
- (int)_localFrequencyStabilityUpper;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyToleranceUpper;
- (unsigned char)_localOscillatorType;
- (id)initWithService:(id)a0 pid:(int)a1;

@end
