@class NSArray, IKAudioElement, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray *images;
@property (readonly, retain, nonatomic) IKAudioElement *audio;
@property (readonly, nonatomic) double transitionInterval;
@property (readonly, retain, nonatomic) UIColor *backgroundColor;

@end
