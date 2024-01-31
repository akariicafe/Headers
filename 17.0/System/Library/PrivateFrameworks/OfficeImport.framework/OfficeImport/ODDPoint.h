@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (void)setType:(int)a0;
- (id)init;
- (id)description;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (int)type;
- (id)propertySet;
- (id)shapeProperties;

@end
