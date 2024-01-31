@class PXStoryConfiguration, NSString, NSArray, PFStoryAutoEditConfiguration;
@protocol PXAudioCueSource, PXStorySongResource, PXStoryAutoEditDecisionList;

@interface PXStoryConcreteStyle : NSObject <PXStoryStyle> {
    NSArray *_allowedKeyAssetClipCompositionsInPortrait;
    NSArray *_allowedKeyAssetClipCompositionsInLandscape;
    NSArray *_allowedClipCompositionsInPortrait;
    NSArray *_allowedClipCompositionsInLandscape;
    NSArray *_allowedClipCompositionsInSquareView;
    PFStoryAutoEditConfiguration *_autoEditConfiguration;
}

@property (readonly, nonatomic) Class timelineStyleClass;
@property (readonly, nonatomic) id<PXStoryAutoEditDecisionList> autoEditDecisionList;
@property (readonly, nonatomic) struct { unsigned long long croppingOptions; BOOL preferStillKeySegment; } styleOptions;
@property (readonly, weak, nonatomic) PXStoryConfiguration *storyConfiguration;
@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, nonatomic) id<PXAudioCueSource> cueSource;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } outroDuration;
@property (readonly, nonatomic) BOOL isCustomized;

+ (id)bestClipCompositionFromClipCompositions:(id)a0 forKeyAsset:(id)a1 contentInfo:(const struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 playbackStyle:(long long)a3 spec:(id)a4 croppingContext:(id)a5 options:(unsigned long long)a6;

- (id)description;
- (void).cxx_destruct;
- (id)createRandomNumberGenerators;
- (id)initWithCustomColorGradeKind:(long long)a0 originalColorGradeCategory:(id)a1 songResource:(id)a2 cueSource:(id)a3 autoEditDecisionList:(id)a4 styleOptions:(struct { unsigned long long x0; BOOL x1; })a5 isCustomized:(BOOL)a6 storyConfiguration:(id)a7;
- (id)initWithStoryConfiguration:(id)a0;
- (id)timelineStyleWithSpec:(id)a0 resourcesDataSource:(id)a1 randomNumberGenerators:(id)a2 errorReporter:(id)a3;

@end
