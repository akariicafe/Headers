@class UIImage, NSDate, NSObject, NTKWorldClockHighlightedMapLocationView, CLKClockTimerToken, UIView, UIColor, NSString, NSArray, CLKDevice, NSNumber, UIFontDescriptor, UIImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKSwissWorldClockComplicationGraphicRectangularView : UIView <CLKFullColorImageView> {
    BOOL _showGossamerUI;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) CLKClockTimerToken *timeUpdateToken;
@property (retain, nonatomic) NSObject *significantTimeChangeObserver;
@property (retain, nonatomic) UIImageView *mapView;
@property (retain, nonatomic) UIImageView *nightMaskView;
@property (retain, nonatomic) UIView *terminatorView;
@property (retain, nonatomic) NTKWorldClockHighlightedMapLocationView *highlightedLocationView;
@property (retain, nonatomic) NSArray *locationViews;
@property (retain, nonatomic) NSDate *generatedDate;
@property (retain, nonatomic) UIImage *nightMask;
@property (retain, nonatomic) NSNumber *cityLatitude;
@property (retain, nonatomic) NSNumber *cityLongitude;
@property (retain, nonatomic) NSArray *cities;
@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic, getter=shouldShowIdealizedTime) BOOL showIdealizedTime;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })_locationMarkerOffsetForCoordinate:(struct { double x0; double x1; })a0;
- (void)_reloadCities;
- (BOOL)_shouldGenerate:(id)a0 date:(id)a1;
- (void)_updateNightMaskImage;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
