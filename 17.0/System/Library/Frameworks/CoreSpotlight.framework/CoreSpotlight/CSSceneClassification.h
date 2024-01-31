@interface CSSceneClassification : CSExternalAnalysisTag <CSCoderEncoder>

@property unsigned int sceneIdentifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property long long sceneType;
@property long long mediaType;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCSCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2 sceneIdentifier:(unsigned int)a3;

@end
