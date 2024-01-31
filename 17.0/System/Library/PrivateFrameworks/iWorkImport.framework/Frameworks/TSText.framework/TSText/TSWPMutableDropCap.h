@interface TSWPMutableDropCap : TSWPDropCap

@property (nonatomic) long long dropCapType;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfRaisedLines;
@property (nonatomic) double outdent;
@property (nonatomic) double padding;
@property (nonatomic) BOOL shapeEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double characterScale;
@property (nonatomic) long long wrapType;
@property (nonatomic) unsigned long long numberOfCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPropertiesFromDropCap:(id)a0;

@end
