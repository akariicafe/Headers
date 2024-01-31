@class NSCalendar;

@interface HKDateCoordinateTransform : HKCoordinateTransform

@property (retain, nonatomic) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)coordinateForValue:(id)a0;
- (id)initWithCurrentCalendar:(id)a0;
- (id)valueForCoordinate:(double)a0;

@end
