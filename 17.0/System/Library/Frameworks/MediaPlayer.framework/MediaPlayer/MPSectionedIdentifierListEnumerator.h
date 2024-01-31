@class MPSectionedIdentifierListEntry, NSMutableArray, MPSectionedIdentifierList;

@interface MPSectionedIdentifierListEnumerator : NSEnumerator

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSMutableArray *contexts;
@property (retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults;
@property (retain, nonatomic) MPSectionedIdentifierListEntry *endEntry;
@property (readonly, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithSectionedIdentifierList:(id)a0 options:(unsigned long long)a1 startEntry:(id)a2 endEntry:(id)a3 withExclusiveAccessToken:(id)a4;
- (id)nextObjectWithExclusiveAccessToken:(id)a0;

@end
