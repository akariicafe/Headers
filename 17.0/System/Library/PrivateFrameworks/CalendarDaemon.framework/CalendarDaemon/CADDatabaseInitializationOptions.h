@class ClientIdentity, NSString, NSArray, NSURL, CADChangeTrackingClientId, NSObject, CADMockPermissionValidator;
@protocol CalCalendarDataContainerProvider, OS_tcc_identity;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) BOOL enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (retain, nonatomic) NSString *managementBundleIdentifier;
@property (retain, nonatomic) NSURL *databaseDirectory;
@property (retain, nonatomic) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowDelegateSources;
@property (retain, nonatomic) NSArray *allowedSourceIdentifiers;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *privacyClientIdentity;
@property (retain, nonatomic) CADMockPermissionValidator *mockPermissions;
@property (retain, nonatomic) ClientIdentity *remoteClientIdentity;

- (id)init;
- (id)validOptionsForConnection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)purifyOptions;
- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithCoder:(id)a0;

@end
