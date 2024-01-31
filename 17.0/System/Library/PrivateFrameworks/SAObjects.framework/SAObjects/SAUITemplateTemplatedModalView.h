@class NSArray;

@interface SAUITemplateTemplatedModalView : SAAceView

@property (copy, nonatomic) NSArray *templateItems;

+ (id)templatedModalView;
+ (id)templatedModalViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
