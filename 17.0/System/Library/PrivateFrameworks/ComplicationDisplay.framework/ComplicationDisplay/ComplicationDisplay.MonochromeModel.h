@interface ComplicationDisplay.MonochromeModel : NSObject <CLKMonochromeFilterProvider> {
    void /* unknown type, empty encoding */ _fraction;
    void /* unknown type, empty encoding */ _accent;
    void /* unknown type, empty encoding */ _background;
    void /* unknown type, empty encoding */ _style;
}

- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)init;
- (void).cxx_destruct;

@end
