@interface IPAOrientationOperator : IPAGeometryOperator {
    long long _orientation;
}

+ (id)operatorWithIdentifier:(id)a0 orientation:(long long)a1;
+ (id)operatorWithOrientation:(long long)a0;

- (id)description;
- (id)transformForGeometry:(id)a0;

@end
