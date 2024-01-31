@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (readonly, nonatomic) long long showSettings;
@property (readonly, retain, nonatomic) NSArray *images;
@property (readonly, nonatomic) unsigned long long transition;
@property (readonly, nonatomic) double transitionInterval;

@end
