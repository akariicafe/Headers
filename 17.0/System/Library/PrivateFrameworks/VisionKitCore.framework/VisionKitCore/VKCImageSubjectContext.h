@class NSNumber, NSArray, VKCImageSubjectContextInstance, VKCRemoveBackgroundResult, UIImage, NSIndexSet, VKCRemoveBackgroundRequest;

@interface VKCImageSubjectContext : NSObject

@property (retain, nonatomic) NSArray *subjectPaths;
@property (retain, nonatomic) VKCImageSubjectContextInstance *allSubjectsInstance;
@property (retain, nonatomic) NSArray *subjectInstances;
@property (retain, nonatomic) VKCRemoveBackgroundResult *maskResult;
@property (readonly, nonatomic) VKCRemoveBackgroundRequest *request;
@property (nonatomic) unsigned long long subjectCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCropRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) long long imageOrientation;
@property (retain, nonatomic) UIImage *customImageForRemoveBackground;
@property (retain, nonatomic) NSIndexSet *activeSubjectIndexes;
@property (retain, nonatomic) NSIndexSet *activeMADSubjectIndexes;
@property (readonly, nonatomic) NSIndexSet *allSubjectIndexes;
@property (readonly, nonatomic) BOOL allSubjectsSelected;
@property (readonly, nonatomic) NSNumber *animatedStickerScore;

- (void).cxx_destruct;
- (id)normalizedPathForSubjectWithIndexSet:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 topLevelOnly:(BOOL)a2;
- (BOOL)containsSubjectAtNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)convertExternalIndexSetToInternal:(id)a0;
- (id)convertIndexSetToConcreteSubjectIndexes:(id)a0;
- (id)indexOfSubjectAtNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithMaskResult:(id)a0;
- (id)madSubjectIndexesForVKSubjectIndexes:(id)a0;
- (id)normalizedPathForActiveSubjectsWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topLevelOnly:(BOOL)a1;
- (id)normalizedPathForSubjectAtIndex:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 topLevelOnly:(BOOL)a2;
- (void)prepareInstanceImagesWithCIContext:(id)a0 instance:(id)a1 image:(struct CGImage { } *)a2;
- (void)preparePathsAndImageMaskIfNecessaryWithContext:(id)a0;
- (void)processPathForInstance:(id)a0;
- (BOOL)subjectIndexes:(id)a0 equivalentToIndexes:(id)a1;

@end
