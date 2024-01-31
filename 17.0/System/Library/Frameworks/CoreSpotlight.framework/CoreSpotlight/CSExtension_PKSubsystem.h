@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;

- (void)beginUsing:(id)a0 withBundle:(id)a1;
- (void)endUsing:(id)a0;
- (id)principleClassFromDictionary:(id)a0;

@end
