@class NSArray;
@protocol FCNonDestructivePrivateDataActionProvider;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject

@property (retain, nonatomic) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;
@property (copy, nonatomic) NSArray *privateDataControllers;
@property (nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;

- (id)init;
- (void)handleMigrationWithPrivateDataDirectory:(id)a0;
- (id)initWithPrivateDataActionProvider:(id)a0 privateDataControllers:(id)a1 privateDataSyncingEnabled:(BOOL)a2;
- (void).cxx_destruct;

@end
