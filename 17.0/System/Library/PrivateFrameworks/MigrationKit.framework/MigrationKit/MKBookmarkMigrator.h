@class WebBookmarkCollection, NSMutableDictionary;

@interface MKBookmarkMigrator : MKMigrator {
    WebBookmarkCollection *_collection;
    NSMutableDictionary *_rootFolder;
}

- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0;
- (id)_bookmarkFolderAtTitlePath:(id)a0 withinBookmarkFolder:(id)a1;
- (id)_bookmarkFolderAtTitlePath:(id)a0 withinRootFolder:(id)a1;
- (id)_createBookmarkFolderWithTitle:(id)a0 UUID:(id)a1;
- (id)_createRootBookmarkFolder;
- (void)importDataEncodedInJSON:(id)a0;

@end
