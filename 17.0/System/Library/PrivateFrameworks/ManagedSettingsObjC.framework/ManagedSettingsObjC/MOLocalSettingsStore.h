@class NSString, NSUUID, NSXPCConnection, NSObject;

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL syncToWatch;

+ (id)new;

- (id)reader;
- (id)init;
- (void)dealloc;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)writer;
- (void)clearAllSettings;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (id)getStoreProperties;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (id)initWithSharedContainer:(id)a0;
- (void)removeValueForSetting:(id)a0 inGroup:(id)a1;
- (void)setValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)updateStoreProperties:(id)a0;

@end
