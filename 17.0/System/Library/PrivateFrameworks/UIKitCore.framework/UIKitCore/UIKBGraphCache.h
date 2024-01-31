@class UIScreen, NSMutableDictionary, NSDictionary, NSString;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {
    UIScreen *_screen;
}

@property (readonly, nonatomic) NSMutableDictionary *graphCache;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)graphCacheForScreen:(id)a0;

- (BOOL)_matchingOptions:(id)a0;
- (void).cxx_destruct;
- (id)_initWithScreen:(id)a0 options:(id)a1;

@end
