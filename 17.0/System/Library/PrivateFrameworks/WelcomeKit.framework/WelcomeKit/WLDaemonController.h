@class WLDaemonConnection;

@interface WLDaemonController : NSObject

@property (retain, nonatomic) WLDaemonConnection *connection;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getLocalImportOptionsWithCompletion:(id /* block */)a0;
- (void)importLocalContent;
- (void)setStashDataLocally:(BOOL)a0;

@end
