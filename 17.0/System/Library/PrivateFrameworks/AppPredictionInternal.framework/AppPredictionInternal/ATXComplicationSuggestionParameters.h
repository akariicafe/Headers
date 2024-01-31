@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)modularComplicationsToPriorsMapping;
- (id)init;
- (BOOL)alwaysUseFallbackSets;
- (id)inlineComplicationsToPriorsMapping;
- (id)fallbackSetsForSet1;
- (BOOL)showPreviewsInPosterGallery;
- (void).cxx_destruct;
- (id)fallbackSetForLandscape;
- (id)fallbackSetsForSet3;
- (id)appsToPriorsMapping;
- (id)fallbackSetsForSet2;

@end
