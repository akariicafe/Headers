@class IKTextElement, UIColor, IKBackgroundElement, NSArray, IKLockupElement;

@interface IKDocumentBannerElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic, getter=isFixed) BOOL fixed;
@property (readonly, retain, nonatomic) NSArray *buttons;
@property (readonly, retain, nonatomic) IKLockupElement *lockup;

- (BOOL)fixed;

@end
