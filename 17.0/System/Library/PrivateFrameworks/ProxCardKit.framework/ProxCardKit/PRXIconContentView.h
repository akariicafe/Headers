@class NSArray, PRXLabel, UILayoutGuide;

@interface PRXIconContentView : PRXCardContentView {
    NSArray *_imageViewsConstraints;
    NSArray *_bodyLabelConstraints;
    UILayoutGuide *_imageViewsGuide;
}

@property (copy, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) PRXLabel *bodyLabel;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCardStyle:(long long)a0;

@end
