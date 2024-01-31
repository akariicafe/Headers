@interface GEOLunarEventCalculator : NSObject {
    struct { double latitude; double longitude; } _location;
}

- (id)initWithLocation:(struct { double x0; double x1; })a0;
- (id)lunarEventsFrom:(id)a0 to:(id)a1;
- (id)lunarEventsFrom:(id)a0 to:(id)a1 altitude:(double)a2;

@end
