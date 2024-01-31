@class NSString, PXFocusInfo;

@interface _PXSharedAlbumActivityGadgetContentView : UIView <PXFocusInfoProvider>

@property (copy, nonatomic) id /* block */ layoutSubviewsHandler;
@property (retain, nonatomic) PXFocusInfo *focusInfo;
@property (copy, nonatomic) id /* block */ focusInfoChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
