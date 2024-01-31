@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (void)setType:(int)a0;
- (id)description;
- (int)type;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;

@end
