@class NSString, WebBookmarkCollection, NSObject;
@protocol OS_dispatch_queue;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_collection;
- (void).cxx_destruct;
- (id)bookmarkWithID:(int)a0;
- (id)bookmarksMatchingString:(id)a0;
- (id)databaseHealthInformation;
- (void)enumerateBookmarks:(BOOL)a0 andReadingListItems:(BOOL)a1 matchingString:(id)a2 usingBlock:(id /* block */)a3;
- (id)initReadonlySafariBookmarkCollection;
- (id)readingListWithUnreadOnly:(BOOL)a0 filteredUsingString:(id)a1;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)a0;
- (id)leafChildCountForFoldersInFolderWithID:(int)a0;
- (id)readingListBookmarksMatchingString:(id)a0 maxResults:(unsigned int)a1 onlyArchivedBookmarks:(BOOL)a2;

@end
