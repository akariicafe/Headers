@class NSLocale;

@interface VMConfiguration : NSObject

@property (class, readonly) NSLocale *localeForTranscriptionLanguage;
@property (class, readonly) float confidenceThreshold;
@property (class, readonly) float confidenceLowQualityThreshold;
@property (class, readonly) float confidenceSegmentThreshold;

+ (id)confidenceLowQualityThresholdFromAsset;
+ (id)confidenceSegmentThresholdFromAsset;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceThresholdFromAssetForKey:(id)a0;
+ (id)confidenceThresholdFromDefaultsForKey:(id)a0;
+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)a0;

@end
