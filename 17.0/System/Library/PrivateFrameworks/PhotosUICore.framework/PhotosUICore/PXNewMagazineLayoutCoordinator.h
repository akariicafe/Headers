@class NSArray, PXNewMagazineRectArray, NSMutableArray;

@interface PXNewMagazineLayoutCoordinator : NSObject {
    PXNewMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
}

@property (readonly, nonatomic) NSArray *paddingInputs;
@property (readonly, nonatomic) double tileAspectRatio;
@property (readonly, nonatomic) BOOL stopIfAnyGoodLayout;
@property (readonly, nonatomic) unsigned long long currentLayoutsCount;
@property (readonly, nonatomic) PXNewMagazineRectArray *currentBestLayout;
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts;
@property (retain, nonatomic) PXNewMagazineRectArray *currentLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL stop;

- (void).cxx_destruct;
- (void)validateCurrentLayoutAsFallback;
- (id)initWithPaddingInputs:(id)a0 tileGrid:(id)a1 tileAspectRatio:(double)a2 stopIfAnyGoodLayout:(BOOL)a3;
- (double)scoreOfLayout:(id)a0;
- (BOOL)validateCurrentLayout;

@end
