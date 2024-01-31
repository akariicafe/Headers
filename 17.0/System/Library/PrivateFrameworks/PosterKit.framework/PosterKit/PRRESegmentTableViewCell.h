@class UISegmentedControl;

@interface PRRESegmentTableViewCell : PRRETableViewCell {
    UISegmentedControl *_segment;
}

- (void)_configure;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_currentValue;
- (void)_setCurrentValue:(id)a0;

@end
