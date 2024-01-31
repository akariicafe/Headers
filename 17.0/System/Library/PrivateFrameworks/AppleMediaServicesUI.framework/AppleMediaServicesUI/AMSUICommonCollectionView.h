@class AMSUICommonCollectionViewHandler;
@protocol AMSUICommonCollectionViewDelegate, UICollectionViewDelegate;

@interface AMSUICommonCollectionView : UICollectionView

@property (readonly, nonatomic) AMSUICommonCollectionViewHandler *handler;
@property (weak, nonatomic) id<AMSUICommonCollectionViewDelegate> commonDelegate;
@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;

@end
