@class NSString, NSMapTable, HMCPartition;

@interface HMCRedirector : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMapTable *_insertClass;
    NSMapTable *_updateClass;
    NSMapTable *_updateModelID;
    NSMapTable *_deleteClass;
    NSMapTable *_deleteModelID;
    HMCPartition *_partition;
}

@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)processInserts:(id)a0 updates:(id)a1 deletes:(id)a2;
- (id)initWithLabel:(id)a0 partition:(id)a1;
- (id)addTarget:(id)a0 selector:(SEL)a1 changeMask:(unsigned long long)a2 forChangesOfObjectsWithModelType:(id)a3 forChangesOfObjectsWithModelID:(id)a4 error:(id *)a5;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)removeRegistrationForChangeOfObjectsOfModelType:(id)a0 forChangesOfObjectsWithModelID:(id)a1;
- (id)addTarget:(id)a0 selector:(SEL)a1 changeMask:(unsigned long long)a2 forChangesOfObjectsWithModelType:(id)a3 forChangesOfObjectsWithModelID:(id)a4;

@end
