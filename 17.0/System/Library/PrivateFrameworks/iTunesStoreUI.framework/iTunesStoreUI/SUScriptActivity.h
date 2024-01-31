@class SUActivity, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptActivity : SUScriptObject {
    SUScriptFunction *_actionFunction;
}

@property (readonly, nonatomic) SUActivity *nativeActivity;
@property (retain) WebScriptObject *actionFunction;
@property (copy) NSString *activityTitle;
@property (copy) NSString *activityType;
@property (readonly) NSString *activityImageNameGiftAppStore;
@property (readonly) NSString *activityImageNameGiftMusicStore;
@property (readonly) NSString *activityImageNamePingAppStore;
@property (readonly) NSString *activityImageNamePingMusicStore;
@property (readonly) NSString *activityImageNameWishlistAppStore;
@property (readonly) NSString *activityImageNameWishlistMusicStore;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_nativeActivity;
- (void)_performActionFunctionWithItems:(id)a0;
- (void)setActivityImageWithName:(id)a0;
- (void)setActivityImageWithURL:(id)a0 scale:(id)a1;

@end
