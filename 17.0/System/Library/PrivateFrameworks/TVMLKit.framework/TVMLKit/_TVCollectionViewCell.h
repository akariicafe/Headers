@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting;

@interface _TVCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting>

@property (weak, nonatomic) UIView<TVAuxiliaryViewSelecting> *selectingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;

@end
