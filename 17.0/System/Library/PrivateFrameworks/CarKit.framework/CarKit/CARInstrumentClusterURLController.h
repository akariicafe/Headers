@class NSObject, NSString, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CARInstrumentClusterURLController : NSObject <CARAppHistoryServerToClientInterface, BSInvalidatable>

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
