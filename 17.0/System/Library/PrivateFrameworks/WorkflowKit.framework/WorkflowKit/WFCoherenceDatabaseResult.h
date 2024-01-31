@class WFLibraryQuery;

@interface WFCoherenceDatabaseResult : WFDatabaseResult

@property (readonly, nonatomic) WFLibraryQuery *libraryQuery;

- (id)description;
- (void).cxx_destruct;
- (id)unsearchedDescriptorsWithError:(id *)a0;
- (id)initWithDatabase:(id)a0 libraryQuery:(id)a1;

@end
