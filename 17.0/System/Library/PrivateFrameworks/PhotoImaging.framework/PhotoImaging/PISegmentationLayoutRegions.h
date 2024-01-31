@class NSArray, NSString;

@interface PISegmentationLayoutRegions : NSObject <PFParallaxAssetRegions>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gazeAreaRect;
@property (readonly, nonatomic) NSArray *faceRegions;
@property (readonly, nonatomic) NSArray *petRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryFromRegions:(id)a0;
+ (id)regionsFromDictionary:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 faces:(id)a2 pets:(id)a3;
- (id)initWithAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 gazeAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 faces:(id)a3 pets:(id)a4;

@end
