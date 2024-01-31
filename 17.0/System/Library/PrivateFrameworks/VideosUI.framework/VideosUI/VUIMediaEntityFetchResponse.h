@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <NSCopying>

@property (nonatomic) unsigned long long mediaEntitySubtype;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;
@property (copy, nonatomic) NSArray *grouping;
@property (copy, nonatomic) NSArray *groupingSortIndexes;
@property (nonatomic) BOOL hasDataForCheckHasItemsOption;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_updateWithResponse:(id)a0 changes:(id)a1 replaceContentsOnNilChanges:(BOOL)a2;

@end
