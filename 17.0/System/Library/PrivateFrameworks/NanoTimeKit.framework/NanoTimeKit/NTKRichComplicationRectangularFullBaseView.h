@class UIView;

@interface NTKRichComplicationRectangularFullBaseView : NTKRichComplicationRectangularBaseView {
    UIView *_content;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)init;
- (id)content;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
