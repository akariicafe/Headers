@class NSString;

@interface WFLibraryQuery : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ performer;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ queryDescription;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)deletedFolders;
+ (id)sortedWorkflowsWithQuery:(id)a0;
+ (id)sortedGroupings;
+ (id)sortedFolders;
+ (id)sortedWorkflowsWithQuery:(id)a0 hasTombstonedConflicts:(BOOL)a1;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 associatedAppBundleIdentifier:(id)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 limit:(long long)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameContaining:(id)a2 limit:(long long)a3;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameEqualing:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)performReturningCollectionsIn:(id)a0 database:(id)a1 error:(id *)a2;
- (id)performReturningShortcutsIn:(id)a0 database:(id)a1 error:(id *)a2;

@end
