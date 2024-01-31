@class NSArray;

@interface SBWidgetOnboardingLayoutBuilder : NSObject

@property (readonly, nonatomic) NSArray *pinnedWidgets;
@property (readonly, nonatomic) NSArray *suggestionWidgets;

- (void).cxx_destruct;
- (id)defaultMediumCalendarWidgetIcon;
- (id)deduplicateInsidePinnedWidgets;
- (id)defaultCalendarWidgetIcon:(unsigned long long)a0;
- (id)defaultFirstSuggestionWidgetIcon:(unsigned long long)a0;
- (id)defaultLargeFirstSuggestionWidgetIcon;
- (id)defaultLargeSecondSuggestionWidgetIcon;
- (id)defaultMediumFirstSuggestionWidgetIcon;
- (id)defaultMediumSecondSuggestionWidgetIcon;
- (id)defaultSecondSuggestionWidgetIcon:(unsigned long long)a0;
- (id)defaultSmallCalendarWidgetIcon;
- (id)defaultSmallClockWidgetIcon;
- (id)defaultSmallNotesWidgetIcon;
- (id)initWithPinnedWidgets:(id)a0 suggestionWidgets:(id)a1;
- (BOOL)isCalendarWidget:(id)a0;
- (BOOL)isCalendarWidgetIcon:(id)a0;
- (BOOL)isClockWidget:(id)a0;
- (BOOL)isFirstSuggestionActiveWidgetIcon:(id)a0;
- (BOOL)isSecondSuggestionActiveWidgetIcon:(id)a0;
- (id)migratedDefaultWidgets:(BOOL)a0;
- (id)migratedFourWidgets:(id)a0;
- (id)migratedOneLargeWidget:(id)a0;
- (id)migratedOneMediumWidget:(id)a0;
- (id)migratedOneSmallWidget:(id)a0;
- (id)migratedSmallAndMediumWidget:(id)a0;
- (id)migratedThreeWidgets:(id)a0;
- (id)migratedTwoMediumWidgets:(id)a0;
- (id)migratedTwoSmallWidgets:(id)a0;

@end
