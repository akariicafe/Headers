@class NSArray, NSString;

@interface SASTGridItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *gridCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gridItemWithDictionary:(id)a0 context:(id)a1;
+ (id)gridItem;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
