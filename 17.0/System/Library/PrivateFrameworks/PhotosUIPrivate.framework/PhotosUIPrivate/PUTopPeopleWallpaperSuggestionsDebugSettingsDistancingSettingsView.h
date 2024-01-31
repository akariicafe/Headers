@class PUTopPeopleWallpaperSuggestionsDistancingContext, UITextField;

@interface PUTopPeopleWallpaperSuggestionsDebugSettingsDistancingSettingsView : UIView {
    PUTopPeopleWallpaperSuggestionsDistancingContext *_distancingContext;
}

@property (readonly) UITextField *timePivotTextField;
@property (readonly) UITextField *locationPivotTextField;
@property (readonly) UITextField *peoplePivotTextField;
@property (readonly) UITextField *sceneprintPivotTextField;
@property (readonly) UITextField *timeFactorTextField;
@property (readonly) UITextField *locationFactorTextField;
@property (readonly) UITextField *peopleFactorTextField;
@property (readonly) UITextField *sceneprintFactorTextField;
@property (readonly) UITextField *maximumNumberOfSuggestionsWithPeopleTextField;
@property (readonly) UITextField *maximumNumberOfSuggestionsWithoutPeopleTextField;

- (void).cxx_destruct;
- (void)setPeoplePivot:(id)a0;
- (id)initWithDistancingContext:(id)a0;
- (void)setLocationFactor:(id)a0;
- (void)setLocationPivot:(id)a0;
- (void)setMaximumNumberOfSuggestionsWithPeople:(id)a0;
- (void)setMaximumNumberOfSuggestionsWithoutPeople:(id)a0;
- (void)setPeopleFactor:(id)a0;
- (void)setSceneprintFactor:(id)a0;
- (void)setSceneprintPivot:(id)a0;
- (void)setTimeFactor:(id)a0;
- (void)setTimePivot:(id)a0;

@end
