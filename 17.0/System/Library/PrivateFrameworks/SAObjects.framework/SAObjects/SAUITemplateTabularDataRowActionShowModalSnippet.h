@protocol SAServerBoundCommand;

@interface SAUITemplateTabularDataRowActionShowModalSnippet : SAUITemplateTabularDataRowAction

@property (retain, nonatomic) id<SAServerBoundCommand> fetchContentCommand;

+ (id)tabularDataRowActionShowModalSnippet;
+ (id)tabularDataRowActionShowModalSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
