@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (nonatomic) long long colorSpaceID;
@property (nonatomic) double alpha;
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (retain, nonatomic) NSString *systemColorName;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)setColorPropertiesFromCGColor:(struct CGColor { } *)a0;

@end
