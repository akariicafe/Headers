@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void)handlePermanentCreated;
- (id)permDBLocation:(unsigned char *)a0;
- (void)pokeSyncHelperToInitDB;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (BOOL)willMoveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (void).cxx_destruct;
- (void)moveCallsFromTempDatabase;
- (void)createPermanent;
- (void)createHelperConnection;
- (void)createTemporary;

@end
