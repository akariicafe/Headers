@class SHSheetUIServiceClientContext, NSString, BSServiceConnection;
@protocol SHSheetContentPresenter;

@interface SHSheetUIServiceClient : NSObject

@property (readonly, nonatomic) BSServiceConnection *connection;
@property (nonatomic) long long state;
@property (nonatomic) long long pendingRequest;
@property (retain, nonatomic) SHSheetUIServiceClientContext *currentContext;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, weak, nonatomic) id<SHSheetContentPresenter> presenter;

- (BOOL)isConnected;
- (id)sessionServer;
- (void)_didInvalidateConnection;
- (void)connect;
- (void)invalidate;
- (id)initWithSessionIdentifier:(id)a0;
- (void)_reconnect;
- (void).cxx_destruct;
- (void)_activateConnection;
- (void)_didActivateConnection;
- (void)_setupNewConnection;
- (void)updateWithContext:(id)a0;

@end
