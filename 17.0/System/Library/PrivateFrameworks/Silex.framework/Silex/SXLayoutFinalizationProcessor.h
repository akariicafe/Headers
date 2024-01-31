@class NSString;
@protocol SXUnitConverterFactory;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor>

@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
