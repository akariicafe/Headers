@class NSString, NSDictionary;

@interface SUScriptFacebookFriend : SUScriptObject {
    NSDictionary *_dictionary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithFriendDictionary:(id)a0;

@end
