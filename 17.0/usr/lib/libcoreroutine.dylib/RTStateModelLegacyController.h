@class RTLearnedLocationStore, RTMapServiceManager;

@interface RTStateModelLegacyController : NSObject

@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;

+ (BOOL)archiveExists:(long long)a0;
+ (unsigned long long)crcFromData:(id)a0;
+ (id)pathToArchiveFor:(long long)a0;
+ (id)pathToChecksumFor:(long long)a0;
+ (BOOL)stateModelLegacyExists;

- (void).cxx_destruct;
- (BOOL)_migrateStateModelLegacy:(id)a0 error:(id *)a1;
- (id)_getStateModelLegacyWithError:(id *)a0;
- (BOOL)_removeStateModelForArchive:(long long)a0 error:(id *)a1;
- (id)_unarchiveStateModelForArchive:(long long)a0 error:(id *)a1;
- (id)initWithLearnedLocationStore:(id)a0 mapServiceManager:(id)a1;
- (BOOL)migrateStateModelLegacyWithError:(id *)a0;
- (BOOL)removeStateModelLegacyWithError:(id *)a0;

@end
