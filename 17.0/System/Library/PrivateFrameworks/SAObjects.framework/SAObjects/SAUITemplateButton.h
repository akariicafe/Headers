@class NSString, NSArray, NSDictionary, NSNumber, SAUIImageResource;

@interface SAUITemplateButton : SAUITemplateBaseItem

@property (retain, nonatomic) SAUIImageResource *backgroundImage;
@property (copy, nonatomic) NSString *backgroundImageStyle;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *generateForegroundAppSearchButtonLabel;
@property (copy, nonatomic) NSDictionary *highlightedTitles;
@property (copy, nonatomic) NSDictionary *titles;

+ (id)button;
+ (id)buttonWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
