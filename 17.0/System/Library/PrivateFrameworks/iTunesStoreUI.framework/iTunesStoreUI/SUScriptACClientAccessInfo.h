@class SUScriptAppleAccountType, NSString, NSDictionary, NSMutableDictionary;

@interface SUScriptACClientAccessInfo : SUScriptObject {
    SUScriptAppleAccountType *_accountType;
    NSMutableDictionary *_dictionary;
}

@property (readonly) NSDictionary *accessInfoDictionary;
@property (retain) SUScriptAppleAccountType *accountType;
@property (readonly) NSString *accessKeyFacebookAppID;
@property (readonly) NSString *accessKeyFacebookPermissions;
@property (readonly) NSString *accessKeyPurposeStatement;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setValue:(id)a0 forAccessKey:(id)a1;
- (id)valueForAccessKey:(id)a0;

@end
