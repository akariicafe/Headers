@class UIApplication;

@interface TSUExecutionContext : NSObject

@property (class, retain, nonatomic) TSUExecutionContext *sharedContext;

@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) BOOL isApplicationContext;

+ (void)performWithApplication:(id /* block */)a0;
+ (void)beginApplicationContext;
+ (void)beginApplicationExtensionContext;
+ (id)makeInvalidContextError;

- (void)performWithApplication:(id /* block */)a0;
- (BOOL)isUILayoutRTL;

@end
