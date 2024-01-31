@class NSURLSession, NSString, HSFairPlayInfo, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HSConnection : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_activityTimerSource;
    NSURLSession *_connectionSession;
}

@property (nonatomic) unsigned int basePlaylistContainerID;
@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned int databaseID;
@property (nonatomic) unsigned int databaseRevision;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) long long connectionType;
@property (retain, nonatomic) HSFairPlayInfo *fairPlayInfo;
@property (copy, nonatomic) NSString *homeSharingGroupID;

- (void)disconnect;
- (void)dealloc;
- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)signedRequestFromURLRequest:(id)a0;
- (id)initWithBaseURL:(id)a0 connectionType:(long long)a1;
- (void)_continueFPSetupNegotiationWithData:(id)a0 internalConnectionCompletionHandler:(id /* block */)a1;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id /* block */)a0;
- (id)_onSerialQueue_connectionSession;
- (void)_onSerialQueue_sendRequest:(id)a0 withInternalResponseHandler:(id /* block */)a1;
- (unsigned int)_sapVersionForConnectionType;
- (void)_sendRequest:(id)a0 withInternalResponseHandler:(id /* block */)a1;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id /* block */)a0;

@end
