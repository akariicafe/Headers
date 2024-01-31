@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (nonatomic) BOOL editable;
@property (copy, nonatomic) NSArray *items;

+ (id)collection;
+ (id)collectionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
