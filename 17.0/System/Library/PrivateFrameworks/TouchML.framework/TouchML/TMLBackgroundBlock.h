@interface TMLBackgroundBlock : NSObject

+ (void)handleException:(id)a0;
+ (void)initializeJSContext:(id)a0;
+ (id)executeFunction:(id)a0 argument:(id)a1;
+ (id)sharedVM;

@end
