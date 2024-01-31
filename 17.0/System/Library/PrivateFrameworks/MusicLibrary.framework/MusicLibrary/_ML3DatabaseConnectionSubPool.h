@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
}

@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) unsigned long long maxConcurrentConnections;
@property (nonatomic) BOOL useReadOnlyConnections;
@property (nonatomic) BOOL useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;

- (id)init;
- (void)dealloc;
- (void)_handleDatabaseDeletion;
- (id)checkoutConnection:(BOOL *)a0;
- (void)checkInConnection:(id)a0;
- (void)closeConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (void).cxx_destruct;
- (void)handleDiagnostic:(id)a0;
- (void)checkInConnection:(id)a0 returnToPool:(BOOL)a1;
- (id)debugDescription;
- (id)initWithDatabasePath:(id)a0 maxConcurrentConnections:(unsigned long long)a1;

@end
