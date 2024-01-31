@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject {
    SUScriptAppleAccount *_account;
}

@property (readonly) id hasAccounts;
@property (readonly) unsigned long long likeStatusFlagFriendCount;
@property (readonly) unsigned long long likeStatusFlagFriends;
@property (readonly) unsigned long long likeStatusFlagGlobalCount;
@property (readonly) unsigned long long likeStatusFlagMe;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)initWithAppleAccount:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)fetchLikeStatusForURL:(id)a0 flags:(id)a1 completionFunction:(id)a2;
- (void)likeURL:(id)a0 completionFunction:(id)a1;
- (void)unlikeURL:(id)a0 completionFunction:(id)a1;

@end
