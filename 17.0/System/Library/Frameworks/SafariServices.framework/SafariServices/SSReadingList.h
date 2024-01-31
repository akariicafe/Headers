@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection *_connection;
}

+ (id)defaultReadingList;
+ (BOOL)supportsURL:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_setUpConnectionIfNeeded;
- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;
- (BOOL)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;

@end
