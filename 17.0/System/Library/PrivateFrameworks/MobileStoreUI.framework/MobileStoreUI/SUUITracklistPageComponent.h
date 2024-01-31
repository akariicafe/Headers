@class SUUITracklistViewElement;

@interface SUUITracklistPageComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUITracklistViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
