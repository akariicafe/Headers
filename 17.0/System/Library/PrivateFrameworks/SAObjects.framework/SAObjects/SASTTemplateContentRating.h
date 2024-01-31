@class NSString;

@interface SASTTemplateContentRating : SASTTemplateRating

@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *value;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
