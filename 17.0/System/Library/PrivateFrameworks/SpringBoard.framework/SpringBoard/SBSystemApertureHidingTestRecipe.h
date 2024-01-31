@class NSString, NSArray;

@interface SBSystemApertureHidingTestRecipe : NSObject <SBTestRecipe> {
    NSArray *_alphaValues;
    long long _currentAlphaIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (id)title;
- (void)_applyAlpha;

@end
