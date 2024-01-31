@class NSLock, NSUUID, MSVXPCTransaction, ML3DatabaseConnection, ML3Client, ML3MusicLibrary;

@interface ML3ActiveTransaction : NSObject <NSLocking> {
    ML3DatabaseConnection *_connection;
    NSLock *_lock;
    MSVXPCTransaction *_xpcTransaction;
}

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) ML3Client *client;
@property (nonatomic) double lastUsedTime;
@property (nonatomic) BOOL terminable;
@property (nonatomic) BOOL inUseByOperation;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;

- (id)init;
- (void)lock;
- (void)unlock;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_relinquishConnection;
- (id)initWithLibrary:(id)a0 connection:(id)a1 client:(id)a2;
- (void)updateLastUsed;

@end
