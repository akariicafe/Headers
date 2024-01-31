@class NSString;

@interface SBWidgetDebuggingTestRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__systemService;

@end
