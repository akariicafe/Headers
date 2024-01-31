@class NSString, NSNetService, NSURL, HSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HSHomeSharingLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
}

@property (nonatomic) BOOL _hasPendingUpdateRequest;
@property (retain, nonatomic) HSConnection *connection;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (readonly, retain, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (retain, nonatomic) NSNetService *service;
@property (readonly, nonatomic) unsigned int databaseID;
@property (readonly, nonatomic) unsigned int basePlaylistContainerID;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) NSString *deviceGUID;

- (void)disconnect;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (id)securityInfoForURL:(id)a0;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)signedRequestFromURLRequest:(id)a0;
- (id)urlForRequest:(id)a0;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1 version:(unsigned int)a2 baseURL:(id)a3 homeSharingGroupID:(id)a4 connectionType:(long long)a5;

@end
