@class TDElementProduction, NSSet, TDRenditionType, TDRenditionKeySpec, NSDate;

@interface TDRenditionSpec : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL monochrome;
@property (nonatomic) int packedPointX;
@property (nonatomic) int packedPointY;
@property (nonatomic) BOOL alphaCrop;
@property (retain, nonatomic) TDRenditionKeySpec *keySpec;
@property (retain, nonatomic) NSSet *packedRenditions;
@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) TDRenditionSpec *parentRendition;
@property (retain, nonatomic) NSSet *properties;
@property (nonatomic) BOOL preserveForArchiveOnly;
@property (nonatomic) struct CGPoint { double x0; double x1; } packedPoint;

- (void)awakeFromInsert;
- (id)renditionType;
- (id)propertiesAsDictionary;
- (BOOL)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawPackableRenditionInContext:(struct CGContext { } *)a0 withDocument:(id)a1;
- (void)resetToBaseKeySpec;
- (void)setRenditionType:(id)a0;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;

@end
