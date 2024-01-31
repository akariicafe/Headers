@class NSString;

@interface SXComponentClassificationRegister : NSObject <SXClassRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifications;
+ (void)registerClasses;


@end
