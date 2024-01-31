@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_includeEmptyDevices;
- (id)_newBatteryDeviceView;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andMaxNumViews:(double)a1;

@end
