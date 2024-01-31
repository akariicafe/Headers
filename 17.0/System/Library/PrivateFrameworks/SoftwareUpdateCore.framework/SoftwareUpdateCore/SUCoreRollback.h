@class SUCoreRollbackDescriptor, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreRollback : NSObject <NSSecureCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUCoreRollbackDescriptor *rollback;
@property (readonly, retain, nonatomic) SUCoreRollbackDescriptor *eligibleRollback;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadPersistedStateFile;
- (id)previousRollback;
- (void)rollbackCompleted;

@end
