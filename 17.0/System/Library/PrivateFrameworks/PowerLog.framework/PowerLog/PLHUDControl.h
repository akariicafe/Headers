@class BSServiceConnection;
@protocol BSServiceConnectionClient;

@interface PLHUDControl : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (nonatomic) BOOL internalHUDEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_ensureConnection;
- (id)_hudServer;

@end
