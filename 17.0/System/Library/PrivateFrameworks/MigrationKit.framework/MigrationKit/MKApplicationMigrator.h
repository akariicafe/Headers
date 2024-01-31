@class NSDictionary, NSMutableArray, MKApplicationDatabase;

@interface MKApplicationMigrator : MKMigrator {
    BOOL _isImporting;
    unsigned long long _lookupErrorCount;
    MKApplicationDatabase *_db;
    unsigned long long _totalCount;
    unsigned long long _matchedAppsCount;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSDictionary *signatures;

- (void)close;
- (id)init;
- (void)dealloc;
- (id)lookup;
- (BOOL)prompt;
- (void).cxx_destruct;
- (void)cancel;
- (void)lookup:(id)a0;
- (void)install;
- (void)purchase;
- (void)import;
- (void)import:(id)a0;
- (void)install:(id)a0;
- (void)drainQueue;
- (void)didLookup:(id)a0 identifiers:(id)a1 error:(id)a2;
- (void)import:(id)a0 identifiers:(id)a1;
- (void)importDataEncodedInJSON:(id)a0;
- (void)slice:(unsigned long long)a0;

@end
