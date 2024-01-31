@interface PXCloudQuotaMockView : PXCloudQuotaView

- (id)initWithContentView:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)contentViewFont;
- (struct CGSize { double x0; double x1; })contentViewSizeForWidth:(double)a0;
- (id)initWithCloudQuotaFull:(BOOL)a0 includingCounts:(BOOL)a1;

@end
