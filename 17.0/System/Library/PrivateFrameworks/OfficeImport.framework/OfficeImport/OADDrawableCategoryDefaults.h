@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)shapeProperties;
- (void)setShapeProperties:(id)a0;
- (void)setTextBodyProperties:(id)a0;
- (void)setTextListStyle:(id)a0;
- (id)textBodyProperties;
- (id)textListStyle;

@end
