@class NSString, City, UIView, NSLocale;

@interface WeatherView : UIView <CityUpdateObserver> {
    BOOL _showingDay;
    BOOL _showWind;
    UIView *_windView;
    NSLocale *_lastLocale;
}

@property (retain, nonatomic, setter=showCity:) City *city;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)bundle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)refreshLocalization;
- (void)cleanupWindView;
- (BOOL)_setCity:(id)a0 associateAsDelegate:(BOOL)a1;
- (void)cityDidFinishWeatherUpdate:(id)a0;
- (void)cityDidStartWeatherUpdate:(id)a0;
- (void)resetLocale:(id)a0;
- (BOOL)updateWeatherDisplayForCity:(id)a0;

@end
