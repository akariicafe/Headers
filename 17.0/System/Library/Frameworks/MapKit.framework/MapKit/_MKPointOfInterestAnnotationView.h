@class UIColor, UIBlurEffect, MKMapView, UIImage, UIView, NSString, _MKMarkerAnnotationBaseImageView;

@interface _MKPointOfInterestAnnotationView : _MKMapFeatureAnnotationView <_MKBalloonCalloutViewConfiguring> {
    _MKMarkerAnnotationBaseImageView *_anchorDotView;
    long long _balloonCalloutStyle;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAnnotation:(id)a0;
- (void).cxx_destruct;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)_addAnchorDotView;
- (long long)_baseImageType;
- (BOOL)_isMetroArea;
- (void)_resolveBalloonAttributes;
- (void)_updateAnchorOffset;
- (void)_updateFromMap;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)shouldShowCallout;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
