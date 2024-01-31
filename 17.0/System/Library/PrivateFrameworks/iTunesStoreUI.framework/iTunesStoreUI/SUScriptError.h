@class NSString, NSError;

@interface SUScriptError : SUScriptObject {
    NSError *_error;
}

@property (readonly) long long code;
@property (readonly) NSString *domain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedFailureReason;
@property (readonly) NSString *localizedRecoverySuggestion;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)initWithError:(id)a0;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
