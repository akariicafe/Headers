@class NSUUID, ATXProactiveSuggestion;

@interface _SBProactiveAppSuggestion : SBBestAppSuggestion

@property (readonly, nonatomic) ATXProactiveSuggestion *appSuggestion;
@property (readonly, nonatomic) NSUUID *resultUUID;

- (unsigned long long)hash;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPrediction;
- (BOOL)isBluetoothAudioPrediction;
- (BOOL)isBluetoothPrediction;
- (BOOL)isFirstWakePrediction;
- (BOOL)isHeadphonesPrediction;
- (BOOL)isLocationBasedSuggestion;
- (id)initWithAppSuggestion:(id)a0;
- (BOOL)isCarPlayPrediction;
- (BOOL)isLocallyGeneratedSuggestion;

@end
