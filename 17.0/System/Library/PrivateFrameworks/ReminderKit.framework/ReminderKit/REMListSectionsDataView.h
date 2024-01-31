@class REMStore;

@interface REMListSectionsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)fetchListSectionWithObjectID:(id)a0 error:(id *)a1;
- (id)initWithStore:(id)a0;
- (id)fetchListSectionsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchListSectionsCountWithListObjectID:(id)a0 error:(id *)a1;
- (id)fetchListSectionsWithListObjectID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fetchListSectionsInList:(id)a0 error:(id *)a1;
- (id)listSectionsFromAccountStorages:(id)a0 listStorages:(id)a1 listSectionStorages:(id)a2 store:(id)a3;

@end
