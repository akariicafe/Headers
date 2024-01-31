@class NSString;
@protocol SXLayoutBlueprintFactory, SXLayoutContextFactory, SXLayouterFactory, SXUnitConverterFactory, SXComponentSizerEngine;

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory>

@property (readonly, nonatomic) id<SXComponentSizerEngine> componentSizerEngine;
@property (readonly, nonatomic) id<SXLayoutBlueprintFactory> layoutBlueprintFactory;
@property (readonly, nonatomic) id<SXLayouterFactory> layouterFactory;
@property (readonly, nonatomic) id<SXLayoutContextFactory> layoutContextFactory;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithComponentSizerEngine:(id)a0 layoutBlueprintFactory:(id)a1 layouterFactory:(id)a2 layoutContextFactory:(id)a3 unitConverterFactory:(id)a4;
- (id)layoutOperationWithTask:(id)a0 DOMObjectProvider:(id)a1;

@end
