@class NSLock, NSString, NSXPCConnection;
@protocol FAFamilyCircleRequestConnectionFactory;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider>

@property (retain, nonatomic) id<FAFamilyCircleRequestConnectionFactory> factory;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createResumedConnectionWithFactory:(id)a0 provider:(id)a1;

- (id)init;
- (id)serviceConnection;
- (void)dealloc;
- (void)connectionWasInterrupted:(id)a0;
- (id)initWithConnectionFactory:(id)a0;
- (void)connectionWasInvalidated:(id)a0;
- (void).cxx_destruct;

@end
