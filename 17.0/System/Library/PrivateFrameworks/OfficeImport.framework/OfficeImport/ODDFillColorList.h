@class NSArray;

@interface ODDFillColorList : NSObject {
    NSArray *mColors;
    int mHueDirection;
    int mMethod;
}

- (void)setColors:(id)a0;
- (void).cxx_destruct;
- (void)setMethod:(int)a0;
- (id)colorAtIndex:(unsigned long long)a0 count:(unsigned long long)a1 state:(id)a2;
- (id)cycleColorAtIndex:(unsigned long long)a0;
- (void)getComponentsForIndex:(unsigned long long)a0 hue:(float *)a1 saturation:(float *)a2 brightness:(float *)a3 state:(id)a4;
- (id)repeatColorAtIndex:(unsigned long long)a0;
- (void)setHueDirection:(int)a0;
- (id)spanColorAtIndex:(unsigned long long)a0 count:(unsigned long long)a1 state:(id)a2;

@end
