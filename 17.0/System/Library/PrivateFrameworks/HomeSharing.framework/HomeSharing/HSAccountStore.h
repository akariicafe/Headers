@class NSString, ICURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) ICURLRequest *groupIDRequest;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;

+ (id)defaultStore;

- (void)clearCaches;
- (BOOL)canDetermineGroupID;
- (id)init;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (void)clearGroupID;
- (void)setGroupID:(id)a0;
- (id)password;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (id)appleID;
- (id)groupID;
- (void).cxx_destruct;
- (void)setAppleID:(id)a0;
- (void)clearAllCredentials;

@end
