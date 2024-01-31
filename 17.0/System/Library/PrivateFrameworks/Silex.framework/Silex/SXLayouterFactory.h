@class NSString;
@protocol SXUnitConverterFactory, SXColumnCalculator, SXLayoutContextFactory;

@interface SXLayouterFactory : NSObject <SXLayouterFactory>

@property (readonly, nonatomic) id<SXColumnCalculator> columnCalculator;
@property (readonly, nonatomic) id<SXLayoutContextFactory> layoutContextFactory;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
