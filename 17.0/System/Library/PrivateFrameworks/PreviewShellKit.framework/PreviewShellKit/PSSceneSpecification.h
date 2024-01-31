@class UVAgentSceneSpecification;

@interface PSSceneSpecification : NSObject

@property (class, readonly, nonatomic) PSSceneSpecification *previewSceneSpecification;
@property (class, readonly, nonatomic) PSSceneSpecification *mainSceneSpecification;

@property (readonly, nonatomic) UVAgentSceneSpecification *specification;

- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0;

@end
