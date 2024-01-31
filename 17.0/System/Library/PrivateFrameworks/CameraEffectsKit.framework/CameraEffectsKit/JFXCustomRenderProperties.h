@protocol PVCompositeDelegate;

@interface JFXCustomRenderProperties : NSObject

@property (readonly, nonatomic) id<PVCompositeDelegate> renderingDelegate;
@property (readonly, nonatomic) id metadata;
@property (nonatomic) BOOL animojiTapPoint;

+ (id)newCustomRenderProperties:(id)a0 metadata:(id)a1;

- (void).cxx_destruct;

@end
