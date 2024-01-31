@class IMSticker, UIViewController, UIView;

@interface IMAStickerPickerPresentationContext : NSObject

@property (retain, nonatomic) UIViewController *stickerPickerContainer;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) IMSticker *stickerForDeferredRePresentation;
@property (nonatomic) BOOL deferredPresentation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;

@end
