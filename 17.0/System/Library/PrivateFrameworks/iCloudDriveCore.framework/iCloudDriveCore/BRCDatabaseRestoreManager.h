@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject

@property (retain, nonatomic) NSURL *userURL;
@property (retain, nonatomic) NSURL *clientDatabaseURL;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (void)restoreWithCompletionBlock:(id /* block */)a0;

@end
