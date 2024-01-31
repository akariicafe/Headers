@class IFColor;
@protocol ISCompositorResource;

@interface ISContentLayer : ISLayer

@property (retain, nonatomic) IFColor *backgroundColor;
@property (retain, nonatomic) id<ISCompositorResource> content;
@property (nonatomic) BOOL acceptSymbol;

- (id)init;
- (void).cxx_destruct;

@end
