@class NSString;

@interface HealthExperienceUI.DataTypeDetailChartCell : UICollectionViewCell <HKChartOverlayVersionProviding> {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ chartViewController;
    void /* unknown type, empty encoding */ item;
}

@property (nonatomic, readonly) NSString *chartOverlayVersion;
@property (nonatomic, readonly) NSString *description;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
