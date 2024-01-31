@class NSMutableArray;

@interface SBIconStateFolderPath : NSObject {
    NSMutableArray *_folderNames;
    NSMutableArray *_folderDefaultNames;
    NSMutableArray *_folderUniqueIdentifiers;
    NSMutableArray *_folderPaths;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addFolderWithName:(id)a0 defaultName:(id)a1 uniqueIdentifier:(id)a2 indexPath:(id)a3;
- (void)enumerateFoldersUsingBlock:(id /* block */)a0;
- (id)folderDefaultNameAtIndex:(unsigned long long)a0;
- (id)folderIndexPathAtIndex:(unsigned long long)a0;
- (id)folderNameAtIndex:(unsigned long long)a0;
- (id)folderUniqueIdentifierAtIndex:(unsigned long long)a0;

@end
