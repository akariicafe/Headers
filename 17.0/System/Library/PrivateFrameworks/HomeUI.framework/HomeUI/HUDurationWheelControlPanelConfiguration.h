@class NSString;
@protocol HUControlPanelRule;

@interface HUDurationWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (readonly, nonatomic) id<HUControlPanelRule> rule;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_valuesBetweenMinValue:(id)a0 maxValue:(id)a1 stepValue:(id)a2;

- (BOOL)shouldShowSectionFooterForItem:(id)a0;
- (id)_characteristicTypesFromControlPanelItem:(id)a0;
- (id)sectionFooterForItem:(id)a0 forSourceItem:(id)a1;
- (id)sectionTitleForItem:(id)a0 forSourceItem:(id)a1;
- (void)setupControlsForCell:(id)a0 item:(id)a1;
- (BOOL)shouldShowSectionTitleForItem:(id)a0;

@end
