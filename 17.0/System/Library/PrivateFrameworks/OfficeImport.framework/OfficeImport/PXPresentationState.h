@class CXNamespace, NSMutableDictionary, OAVReadState, OAXTableStyleCache, PDPresentation, OAXDrawingState;
@protocol TCCancelDelegate;

@interface PXPresentationState : OCXReadState {
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
}

@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property (readonly, nonatomic) NSMutableDictionary *commentAuthorIdToIndexMap;
@property (retain, nonatomic) CXNamespace *PXPresentationMLNamespace;

+ (void)setPptChartGraphicPropertyDefaultBlock:(id)a0;

- (id)init;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (id)tgtPresentation;
- (id)tableStyleCache;
- (id)modelObjectForLocation:(id)a0;
- (id)oavState;
- (id)officeArtState;
- (void)resetOfficeArtState;
- (void)setModelObject:(id)a0 forLocation:(id)a1;
- (void)setSlideIndex:(long long)a0 forSlideURL:(id)a1;
- (void)setTgtPresentation:(id)a0;
- (void)setupNSForXMLFormat:(int)a0;
- (long long)slideIndexForSlideURL:(id)a0;

@end
