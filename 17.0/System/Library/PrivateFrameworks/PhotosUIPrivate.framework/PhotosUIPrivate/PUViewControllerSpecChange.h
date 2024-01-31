@interface PUViewControllerSpecChange : NSObject

@property (readonly, nonatomic) BOOL changed;
@property (nonatomic) BOOL traitCollectionChanged;
@property (nonatomic) BOOL layoutReferenceSizeChanged;
@property (nonatomic) BOOL layoutStyleChanged;
@property (nonatomic) BOOL presentedForSecondScreenChanged;
@property (nonatomic) BOOL secondScreenSizeChanged;
@property (nonatomic) BOOL prefersCompactLayoutForSplitScreenChanged;

@end
