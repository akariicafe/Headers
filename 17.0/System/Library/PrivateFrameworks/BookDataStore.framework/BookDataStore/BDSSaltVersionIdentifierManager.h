@class BCCloudChangeTokenController, NSString, NSObject;
@protocol BDSCloudKitSupportZoneRecovery;

@interface BDSSaltVersionIdentifierManager : NSObject <BCCloudKitDatabaseZoneObserver>

@property (weak, nonatomic) NSObject<BDSCloudKitSupportZoneRecovery> *zoneDataManager;
@property (weak, nonatomic) BCCloudChangeTokenController *tokenController;
@property (copy, nonatomic) NSString *zoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)databaseController:(id)a0 saltVersionIdentifierChanged:(id)a1 completion:(id /* block */)a2;
- (void)handleSaltVersionIdentifierChange:(id)a0 completion:(id /* block */)a1;
- (id)initWithZoneDataManager:(id)a0 tokenController:(id)a1 databaseController:(id)a2;

@end
