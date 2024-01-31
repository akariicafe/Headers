@class NSMutableArray;
@protocol CACLabeledGridOverlayManagerDelegate;

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager

@property long long currentLevel;
@property (retain) NSMutableArray *labeledElements;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentGridPortraitUpFrame;
@property float maxX;
@property float maxY;
@property float scale;
@property (weak, nonatomic) id<CACLabeledGridOverlayManagerDelegate> delegate;
@property (nonatomic) BOOL needsToBeRedrawn;
@property long long currentNumberOfColumns;
@property long long currentNumberOfRows;
@property long long startingNumber;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } portraitUpCenterPoint;

+ (struct CGSize { double x0; double x1; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 desiredColumns:(unsigned long long)a1 desiredRows:(unsigned long long)a2 level:(unsigned long long)a3 screen:(id)a4;
+ (struct CGSize { double x0; double x1; })gridResolutionForTopLevelWithPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 desiredColumns:(unsigned long long)a1 desiredRows:(unsigned long long)a2 screen:(id)a3;
+ (unsigned long long)maxNumberOfColumnsForDevice;
+ (unsigned long long)maxNumberOfRowsForDevice;

- (BOOL)isOverlay;
- (void)resetIdleTimer;
- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_generateLabeledElementsForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isNextLevelAvailable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestDrilledGridRectForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetAndDrawAtTopLevelWithStartingNumber:(unsigned long long)a0;
- (BOOL)shouldZoom;
- (void)showOverlayWithStartingNumber:(unsigned long long)a0;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (BOOL)updateOverlayWithPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gridContainingLabel:(id)a1;

@end
