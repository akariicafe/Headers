@class NSString, NSArray, SASTTemplateContentRating, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (copy, nonatomic) NSString *canonicalId;
@property (retain, nonatomic) SASTTemplateContentRating *contentRating;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSArray *togglePlayPauseCommands;
@property (copy, nonatomic) NSURL *url;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
