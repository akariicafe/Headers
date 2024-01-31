@class NSString, AMUIDateTimeView, UIView, BSUIVibrancyEffectView, BSUIVibrancyConfiguration;
@protocol AMUIDateProviding;

@interface AMUIDateTimeViewController : UIViewController <AMUIOpacityAdjusting> {
    BOOL _disablesUpdates;
    id _dateProviderToken;
    BSUIVibrancyEffectView *_vibrancyView;
    AMUIDateTimeView *_dateTimeView;
}

@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) UIView *viewForOpacityAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)_stopUpdateTimer;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_startUpdateTimer;
- (id)_dateTimeViewIfExists;
- (void)_updateViewWithDate:(id)a0;

@end
