@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HKMedicationsDemoSearchAssetInterface : NSObject <HKMedicationsAssetInterface> {
    struct sqlite3 { } *_db;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interruptionLock;
}

@property (retain, nonatomic) NSString *assetPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)close;
- (void).cxx_destruct;
- (id)initWithAssetPath:(id)a0;
- (id)expandedGenericMedicationSearchResult:(id)a0 error:(id *)a1;
- (id)genericMedicationsFromTokens:(id)a0 error:(id *)a1;
- (id)medicationFromNDCCode:(id)a0 error:(id *)a1;
- (int)openAsset;

@end
