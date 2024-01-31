@class NSString, IFIconSpecification;

@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe, ISSuppliesIconSpecification>

@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) IFIconSpecification *iconSpecification;

@end
