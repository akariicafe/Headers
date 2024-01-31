@class EFSQLPropertyMapper, EFInt64Set, EDSearchableIndex;

@interface _MFSQLGenerationContext : NSObject {
    EDSearchableIndex *searchableIndex;
    EFInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    BOOL usedBaseTable;
    BOOL haveLibraryIDCriterion;
    BOOL protectedDataAvailable;
}

- (void).cxx_destruct;

@end
