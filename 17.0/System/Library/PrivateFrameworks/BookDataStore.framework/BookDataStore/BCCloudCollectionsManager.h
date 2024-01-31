@class BCCloudDataSource, NSManagedObjectModel, BDSSaltVersionIdentifierManager, BDSServiceProxy, BCCloudChangeTokenController, NSObject;
@protocol BCCloudCollectionMemberManager, BCCloudCollectionDetailManager;

@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOut>

@property (retain, nonatomic) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager;
@property (retain, nonatomic) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudDataSource *collectionDataSource;
@property (nonatomic) BOOL proxyMode;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) BOOL enableCloudSync;

+ (id)sharedManager;
+ (id)sharedClientXPCProxy;

- (void).cxx_destruct;
- (void)deleteCloudDataWithCompletion:(id /* block */)a0;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (id)initClientXPCProxy;
- (void)setEnableCloudSync:(BOOL)a0;

@end
