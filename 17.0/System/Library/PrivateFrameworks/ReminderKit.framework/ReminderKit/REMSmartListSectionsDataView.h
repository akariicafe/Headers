@class REMStore;

@interface REMSmartListSectionsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchSmartListSectionsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchSmartListSectionWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchSmartListSectionsInSmartList:(id)a0 error:(id *)a1;
- (id)smartListSectionsFromAccountStorages:(id)a0 smartListStorages:(id)a1 groupStorages:(id)a2 smartListSectionStorages:(id)a3 store:(id)a4;

@end
