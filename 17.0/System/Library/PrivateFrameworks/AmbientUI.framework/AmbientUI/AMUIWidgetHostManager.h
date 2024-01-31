@class CHSWidgetHost, NSString, SBHIconManager;
@protocol AMUIWidgetHostManagerDelegate;

@interface AMUIWidgetHostManager : NSObject <SBHHomeScreenUsageMonitorObserver>

@property (nonatomic) unsigned long long widgetDataGeneration;
@property (weak, nonatomic) id<AMUIWidgetHostManagerDelegate> delegate;
@property (readonly, nonatomic) CHSWidgetHost *widgetHost;
@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconStackChangedActiveWidget:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconAdded:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconRemoved:(id)a1;
- (id)_descriptionForArray:(id)a0 name:(id)a1;
- (void)homeScreenUsageAggregatorAddWidgetSheetWillPresent:(id)a0;
- (void)_rebuildAndTransmitConfiguredWidgetData:(id)a0;
- (void).cxx_destruct;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserAddedWidgetIconStackSuggestion:(id)a1;
- (id)_containerDescriptorForWidgetIcon:(id)a0 atLocation:(long long)a1 page:(unsigned long long)a2;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserDislikedWidgetIconStackSuggestion:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserTappedWidgetIcon:(id)a1 withURL:(id)a2;
- (id)_rateLimitPolicies;
- (id)_refreshStrategyForIdentifier:(id)a0;

@end
