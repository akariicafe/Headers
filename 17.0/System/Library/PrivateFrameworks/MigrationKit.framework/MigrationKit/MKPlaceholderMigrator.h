@class MKAppSearchRequest, NSMutableArray;

@interface MKPlaceholderMigrator : MKMigrator {
    NSMutableArray *_identifiers;
    MKAppSearchRequest *_request;
}

- (void)remove;
- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0;
- (void)didSearchForPlaceholder:(id)a0 apps:(id)a1 error:(id)a2;
- (void)importDataEncodedInJSON:(id)a0;
- (void)install:(id)a0 apps:(id)a1 error:(id)a2;

@end
