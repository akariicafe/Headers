@class NSString, NSData;

@interface SAUIPluginSnippet : SAUISnippet

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSData *modelData;
@property (copy, nonatomic) NSString *responseViewId;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
