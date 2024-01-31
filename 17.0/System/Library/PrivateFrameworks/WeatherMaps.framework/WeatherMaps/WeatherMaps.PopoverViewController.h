@interface WeatherMaps.PopoverViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ isSelectedLocation;
    void /* unknown type, empty encoding */ currentWeather;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conditionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_temperatureRangeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_temperatureLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewLocationButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_openLocationButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separator;
    void /* unknown type, empty encoding */ unitObserver;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ horizontalSpacing;
    void /* unknown type, empty encoding */ verticalSpacing;
    void /* unknown type, empty encoding */ minWidth;
    void /* unknown type, empty encoding */ maxWidth;
}

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
