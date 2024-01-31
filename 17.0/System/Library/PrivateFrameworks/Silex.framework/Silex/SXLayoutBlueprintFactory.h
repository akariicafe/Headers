@class NSString;
@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;

@interface SXLayoutBlueprintFactory : NSObject <SXLayoutBlueprintFactory>

@property (readonly, nonatomic) id<SXComponentBlueprintFactory> componentBlueprintFactory;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createLayoutBlueprintWithLayoutOptions:(id)a0;
- (id)initWithComponentBlueprintFactory:(id)a0 unitConverterFactory:(id)a1;

@end
