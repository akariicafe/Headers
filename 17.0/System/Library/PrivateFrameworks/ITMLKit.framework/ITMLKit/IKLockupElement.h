@class IKTextElement, IKOrdinalElement, IKImageElement, IKViewElement;

@interface IKLockupElement : IKViewElement

@property (readonly, retain, nonatomic) IKImageElement *image;
@property (readonly, retain, nonatomic) IKImageElement *fullscreenImage;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, nonatomic) BOOL showTitlesOnFocus;
@property (readonly, retain, nonatomic) IKViewElement *overlays;

@end
