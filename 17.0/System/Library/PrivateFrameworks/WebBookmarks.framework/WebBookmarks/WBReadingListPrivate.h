@class WebBookmarksXPCConnection;

@interface WBReadingListPrivate : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)_addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2;

@end
