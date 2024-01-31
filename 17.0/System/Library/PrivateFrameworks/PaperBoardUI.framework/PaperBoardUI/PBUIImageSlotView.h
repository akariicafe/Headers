@class NSString, PBUIImageSlot, UIImageView;

@interface PBUIImageSlotView : UIView <PBUIDeferredImageSlotObserving> {
    UIImageView *_imageView;
}

@property (retain, nonatomic) PBUIImageSlot *imageSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_pointSize;
- (void)_updateWithImage:(id)a0;
- (void)deferredImageSlot:(id)a0 didUpdateImage:(id)a1;

@end
