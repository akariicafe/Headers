@interface EspressoMetalSingleton : NSObject

@property int is_memory_tight;

+ (id)shared;

@end
