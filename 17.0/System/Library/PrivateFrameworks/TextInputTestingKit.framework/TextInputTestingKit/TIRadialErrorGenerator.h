@interface TIRadialErrorGenerator : TIErrorGenerator {
    unsigned long long _letterErrorProbability;
    unsigned long long _defaultDistanceMin;
    unsigned long long _defaultDistanceMax;
    unsigned long long _letterDistanceMin;
    unsigned long long _letterDistanceMax;
}

- (id)initWithAttributes:(id)a0;
- (struct CGPoint { double x0; double x1; })randomBiasForKeyString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
