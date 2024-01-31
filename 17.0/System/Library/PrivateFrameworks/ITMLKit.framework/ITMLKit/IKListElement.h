@class IKViewElement;

@interface IKListElement : IKCollectionElement

@property (readonly, retain, nonatomic) IKViewElement *relatedContent;
@property (readonly, nonatomic) BOOL isLeftAligned;

@end
