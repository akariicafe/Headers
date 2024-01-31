@class HDProfile;

@interface HDDeviceContextStoreManager : NSObject

@property (weak, nonatomic) HDProfile *profile;

+ (id)new;

- (id)init;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)numberOfDeviceContextsPerDeviceType:(id *)a0;
- (BOOL)deleteDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)enumerateAllEntriesWithError:(id *)a0 handler:(id /* block */)a1;
- (id)fetchAllEntriesWithError:(id *)a0;
- (BOOL)insertOrUpdateDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)lookupOrCreateDeviceContextForCurrentSyncIdentityWithError:(id *)a0;
- (BOOL)updateSoftwareVersionForCurrentSyncIdentityWithError:(id *)a0;

@end
