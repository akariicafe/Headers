@class NSString, NSMutableDictionary;
@protocol IKEngineDelegate;

@interface IKEngine : NSObject {
    NSMutableDictionary *_connections;
}

@property (nonatomic) id<IKEngineDelegate> delegate;
@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

+ (void)setOAuthConsumerKey:(id)a0 andConsumerSecret:(id)a1;

- (id)init;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)deleteBookmark:(id)a0 userInfo:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)identifierForConnection:(id)a0;
- (id)connectionForIdentifier:(id)a0;
- (id)authTokenForUsername:(id)a0 password:(id)a1 userInfo:(id)a2;
- (id)moveBookmark:(id)a0 toFolder:(id)a1 userInfo:(id)a2;
- (id)_signatureWithKey:(id)a0 baseString:(id)a1;
- (id)_startConnectionWithAPIPath:(id)a0 bodyArguments:(id)a1 type:(int)a2 userInfo:(id)a3 context:(id)a4;
- (id)addBookmarkWithURL:(id)a0 title:(id)a1 description:(id)a2 folder:(id)a3 resolveFinalURL:(BOOL)a4 userInfo:(id)a5;
- (id)addBookmarkWithURL:(id)a0 userInfo:(id)a1;
- (id)addFolderWithTitle:(id)a0 userInfo:(id)a1;
- (id)archiveBookmark:(id)a0 userInfo:(id)a1;
- (id)bookmarksInFolder:(id)a0 limit:(unsigned long long)a1 existingBookmarks:(id)a2 userInfo:(id)a3;
- (id)bookmarksWithUserInfo:(id)a0;
- (void)cancelAllConnections;
- (void)cancelConnection:(id)a0;
- (id)deleteFolder:(id)a0 userInfo:(id)a1;
- (id)foldersWithUserInfo:(id)a0;
- (unsigned long long)numberOfConnections;
- (id)orderFolders:(id)a0 userInfo:(id)a1;
- (id)starBookmark:(id)a0 userInfo:(id)a1;
- (id)textOfBookmark:(id)a0 userInfo:(id)a1;
- (id)unarchiveBookmark:(id)a0 userInfo:(id)a1;
- (id)unstarBookmark:(id)a0 userInfo:(id)a1;
- (id)updateReadProgressOfBookmark:(id)a0 toProgress:(double)a1 userInfo:(id)a2;
- (id)verifyCredentialsWithUserInfo:(id)a0;

@end
