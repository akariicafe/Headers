@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {
    double _threshold;
}

@property (nonatomic) double minimumChange;

- (double)updatedOutput;
- (id)initWithInput:(double)a0;
- (double)initialOutputForInput:(double)a0;

@end
