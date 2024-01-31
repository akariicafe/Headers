@class NSString, WebBookmarksXPCConnection;
@protocol WebBookmarksClientDelegateProtocol;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
}

@property (weak, nonatomic) id<WebBookmarksClientDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (void).cxx_destruct;
- (void)startReadingListFetcher;
- (void)clearAllReadingListArchives;
- (void)clearReadingListArchiveWithUUID:(id)a0;
- (void)didFinishFetching;
- (void)didStartFetchingReadingListItemWithMessage:(id)a0;
- (void)didStopFetchingReadingListItemWithMessage:(id)a0;
- (void)didUpdateProgressWithMessage:(id)a0;

@end
