@class UISlider;

@interface PRRESliderTableViewCell : PRRETableViewCell {
    UISlider *_slider;
}

- (void)_configure;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_currentValue;
- (void)_setCurrentValue:(id)a0;

@end
