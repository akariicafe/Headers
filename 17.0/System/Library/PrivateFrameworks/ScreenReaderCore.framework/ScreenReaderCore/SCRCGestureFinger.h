@interface SCRCGestureFinger : NSObject {
    unsigned long long _identifier;
    struct CGPoint { double x; double y; } _location;
    double _pressure;
}

- (struct CGPoint { double x0; double x1; })location;
- (double)pressure;
- (unsigned long long)identifier;
- (id)description;
- (long long)type;
- (id)initWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2;

@end
