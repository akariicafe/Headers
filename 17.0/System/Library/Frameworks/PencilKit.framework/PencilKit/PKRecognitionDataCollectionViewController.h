@class NSString, NSArray, NSDictionary, UICollectionView, UIScrollView, UILabel, NSLayoutConstraint;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *drawings;
@property (retain, nonatomic) NSArray *drawingImages;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)openURL:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)cancelButtonTapped:(id)a0;
- (void)adjustCollectionViewHeight;
- (id)initWithDrawings:(id)a0 metadata:(id)a1;
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)a0;
- (void)openTapToRadarWithTempDirectoryURL:(id)a0;
- (id)saveDataForDrawings:(id)a0 baseURL:(id)a1 shouldSaveRecognitionData:(BOOL)a2;
- (void)sendRadarButtonTapped:(id)a0;
- (id)synchronousImageForDrawing:(id)a0;

@end
