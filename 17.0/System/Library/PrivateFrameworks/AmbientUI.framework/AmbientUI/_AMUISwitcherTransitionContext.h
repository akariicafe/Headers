@class NSString, _AMUISwitcherVisibleItemRecord, NSMutableDictionary;
@protocol AMUISwitcherItem;

@interface _AMUISwitcherTransitionContext : NSObject <AMUISwitcherTransition> {
    _AMUISwitcherVisibleItemRecord *_fromRecord;
    _AMUISwitcherVisibleItemRecord *_toRecord;
    NSMutableDictionary *_userInfo;
}

@property (readonly, nonatomic) id<AMUISwitcherItem> fromItem;
@property (readonly, nonatomic) id<AMUISwitcherItem> toItem;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)userInfoObjectForKey:(id)a0;
- (id)initWithFromRecord:(id)a0 toRecord:(id)a1 direction:(long long)a2 interactive:(BOOL)a3;
- (void)removeUserInfoObjectForKey:(id)a0;

@end
