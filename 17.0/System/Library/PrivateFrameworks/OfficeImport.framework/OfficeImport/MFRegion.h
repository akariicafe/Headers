@interface MFRegion : NSObject <MFObject>

- (int)invert:(id)a0;
- (int)frame:(id)a0 in_brush:(id)a1;
- (int)fill:(id)a0 in_brush:(id)a1;
- (id)pathForClippingWithDeviceContext:(id)a0;
- (int)selectInto:(id)a0;

@end
