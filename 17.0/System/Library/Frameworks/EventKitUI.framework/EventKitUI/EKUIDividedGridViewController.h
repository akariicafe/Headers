@class NSArray, UIColor;
@protocol EKUIDividedGridViewControllerDelegate;

@interface EKUIDividedGridViewController : UIViewController {
    long long _type;
    UIColor *_cellBackgroundColor;
}

@property (retain) NSArray *allCells;
@property (retain) NSArray *weekViews;
@property (nonatomic) double preferredWidth;
@property (nonatomic) double preferredInset;
@property (retain, nonatomic) NSArray *buttonTitles;
@property (weak) id<EKUIDividedGridViewControllerDelegate> delegate;

+ (id)dividerColor;

- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)loadView;
- (void).cxx_destruct;
- (void)cellTapped:(id)a0;
- (id)_newDividerView;
- (double)_neededHeight;
- (double)_rowHeightForWidth:(double)a0;
- (id)initWithType:(long long)a0 buttonTitles:(id)a1 cellBackgroundColor:(id)a2;

@end
