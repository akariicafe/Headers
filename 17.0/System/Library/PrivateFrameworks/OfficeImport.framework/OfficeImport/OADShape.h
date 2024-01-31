@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (void)setGeometry:(id)a0;
- (id)geometry;
- (id)init;
- (id)shapeStyle;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (BOOL)isTextBox;
- (id)shapeProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;

@end
