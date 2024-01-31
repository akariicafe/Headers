@class UILabel, UIProgressView;

@interface ICQCloudStorageMeteredBarButtonView : UIView {
    double _percentUsed;
    UILabel *_storageString;
    UIProgressView *_progressBar;
}

+ (id)barButtonItemWithString:(id)a0 andPercentUsed:(double)a1;

- (void)sizeToFit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithString:(id)a0 andPercentUsed:(double)a1;

@end
