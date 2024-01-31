@class UIColor, NSString;

@interface PXStoryConcreteColorResource : PXStoryConcreteResource <PXStoryColorResource>

@property (readonly, nonatomic) UIColor *px_storyResourceColor;
@property (readonly, nonatomic) long long px_storyResourceColorType;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
