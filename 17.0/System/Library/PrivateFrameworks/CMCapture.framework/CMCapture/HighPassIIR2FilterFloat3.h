@interface HighPassIIR2FilterFloat3 : NSObject {
    void /* unknown type, empty encoding */ _lowPassBuffer1;
    void /* unknown type, empty encoding */ _lowPassBuffer2;
    BOOL _isFilterInitialized;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ filteredValue;

- (id)init;
- (void)reset;
- (void /* unknown type, empty encoding */)updateValue:(SEL)a0 withPole:(float)a1;

@end
