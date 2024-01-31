@class NSMutableSet, MPSectionedIdentifierListItemEntry;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject

@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (retain, nonatomic) NSMutableSet *clonedEntries;

- (id)init;
- (void).cxx_destruct;

@end
