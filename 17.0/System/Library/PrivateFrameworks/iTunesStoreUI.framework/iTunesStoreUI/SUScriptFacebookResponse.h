@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {
    NSString *_bodyData;
    SUScriptError *_error;
    long long _statusCode;
}

@property (readonly) NSString *bodyData;
@property (readonly) SUScriptError *error;
@property (readonly) long long HTTPStatusCode;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithData:(id)a0 response:(id)a1 error:(id)a2;

@end
