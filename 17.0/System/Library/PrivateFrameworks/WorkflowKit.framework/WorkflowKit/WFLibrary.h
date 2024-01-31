@class NSString, NSArray;

@interface WFLibrary : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ capsule;
    void /* unknown type, empty encoding */ onChange;
}

@property (nonatomic, readonly) NSString *dotRepresentation;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *identifier;

+ (void)performWithoutNotifyingObservers:(id /* block */)a0 error:(id *)a1;

- (id)init;
- (id)collectionWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)folderContainingShortcut:(id)a0 error:(id *)a1;
- (BOOL)addShortcutWithIdentifier:(id)a0 toCollectionWithIdentifier:(id)a1 error:(id *)a2;
- (id)capsuleDataWithError:(id *)a0;
- (id)collectionWithWorkflowType:(id)a0;
- (id)collectionsContainingShortcut:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 version:(id)a1 data:(id)a2 onChange:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 version:(id)a1 onChange:(id /* block */)a2;
- (id)insertFolderWithName:(id)a0 icon:(unsigned short)a1 identifier:(id)a2 error:(id *)a3;
- (void)insertShortcutWithName:(id)a0 id:(id)a1;
- (BOOL)mergeWithOther:(id)a0 error:(id *)a1;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toFolder:(id)a1 error:(id *)a2;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(long long)a1 ofCollectionWithIdentifier:(id)a2 error:(id *)a3;
- (BOOL)removeShortcutWithIdentifier:(id)a0 error:(id *)a1;
- (id)shortcutIdentifiersWithQuery:(id)a0 error:(id *)a1;
- (id)shortcutsInFolderWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)tombstoneFolderWithIdentifier:(id)a0 error:(id *)a1;
- (id)updateFolderWithIdentifier:(id)a0 newName:(id)a1 newIcon:(unsigned short)a2 error:(id *)a3;

@end
