@class NSDictionary, NSString;

@interface PIScalarKeyframe : NSObject <PIDictionaryRepresentable> {
    double _value;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyframeInArray:(id)a0 closestToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
