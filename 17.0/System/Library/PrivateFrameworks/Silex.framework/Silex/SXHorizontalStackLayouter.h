@class NSString, SXLayouterFactory, SXContainerComponentBlueprint;
@protocol SXLayoutContextFactory, SXUnitConverterFactory, SXLayouterDelegate, SXColumnCalculator;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter> {
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    SXLayouterFactory *_layouterFactory;
    id<SXColumnCalculator> _columnCalculator;
    id<SXLayoutContextFactory> _layoutContextFactory;
    id<SXUnitConverterFactory> _unitConverterFactory;
}

@property (weak, nonatomic) id<SXLayouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutBlueprint:(id)a0 columnLayout:(id)a1 description:(id)a2 shouldContinue:(BOOL *)a3;

@end
