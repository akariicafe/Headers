@class IKButtonElement, IKBackgroundElement, IKDocumentBannerElement, IKMenuBarElement;

@interface IKMainTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKMenuBarElement *menuBar;
@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKButtonElement *button;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *banner;

@end
