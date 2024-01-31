@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject {
    SSLookupRequest *_request;
}

@property (retain) id authenticatesIfNeeded;
@property (copy) NSString *keyProfile;
@property long long localizationStyle;
@property (readonly) long long localizationStyleDevice;
@property (readonly) long long localizationStyleServer;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;
- (id)_className;
- (id)attributeKeys;
- (id)valueForRequestParameter:(id)a0;
- (id)scriptAttributeKeys;
- (void)startWithLookupFunction:(id)a0;

@end
