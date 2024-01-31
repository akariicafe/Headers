@class NSArray, NSMutableArray;

@interface PHNetworkFetcher : NSObject

@property struct __CTServerConnection { } *server;
@property (retain) NSMutableArray *mutableNetworks;
@property (nonatomic) unsigned long long state;
@property (copy) id /* block */ networkNotificationHandler;
@property (readonly) NSArray *networks;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchNetworkList;
- (void)selectNetwork:(id)a0;
- (void)updateNetworkSelectionStatus;

@end
