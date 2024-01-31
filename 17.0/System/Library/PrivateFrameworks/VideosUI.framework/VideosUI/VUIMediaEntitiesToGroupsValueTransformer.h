@class NSString;

@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSString *identifierKeyPath;
@property (copy, nonatomic) NSString *sortIndexKeyPath;
@property (copy, nonatomic) id /* block */ groupsSortComparator;
@property (nonatomic) BOOL performDefaultSort;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithIdentifierKeyPath:(id)a0;

@end
