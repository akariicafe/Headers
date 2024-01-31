@class NSPersistentHistoryToken;

@interface STHistoryAnalyzer : NSObject

@property (readonly, nonatomic) NSPersistentHistoryToken *finalToken;

+ (BOOL)_changedObjectBelongsToFamily:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (BOOL)_isChangeInteresting:(id)a0;
- (id)deltasForStore:(id)a0 inManagedObjectContext:(id)a1 sinceToken:(id)a2 ignoreAuthor:(id)a3 finalToken:(id *)a4 error:(id *)a5;

@end
