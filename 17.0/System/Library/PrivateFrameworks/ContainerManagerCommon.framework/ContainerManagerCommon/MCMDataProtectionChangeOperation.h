@class NSUUID, MCMUserIdentityCache, NSObject;
@protocol OS_dispatch_queue, MCMMetadata;

@interface MCMDataProtectionChangeOperation : NSObject

@property (retain, nonatomic) id<MCMMetadata> dataContainerMetadata;
@property (nonatomic) int newDataProtectionClass;
@property (nonatomic) int changeType;
@property (nonatomic) BOOL retryIfLocked;
@property (nonatomic) BOOL retried;
@property (retain, nonatomic) NSUUID *internalChangeID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (copy) id /* block */ retryStartBlock;
@property (copy) id /* block */ completionBlock;

+ (id)_readAndValidateDataProtectionUpdateAtURL:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)dataProtectionChangeOperationAtURL:(id)a0 queue:(id)a1 error:(id *)a2;
+ (id)dataProtectionChangeOperationWithContainerMetadata:(id)a0 settingClass:(int)a1 retryingIfLocked:(BOOL)a2 changeType:(int)a3 queue:(id)a4;
+ (BOOL)deleteUpdateFileWithContainerIdentity:(id)a0 error:(id *)a1;
+ (id)urlForProtectionOperationWithContainerIdentity:(id)a0;

- (void).cxx_destruct;
- (void)performChangeOperation;
- (BOOL)writeToDiskWithError:(id *)a0;
- (BOOL)_onQueue_stillMostCurrentUpdate;
- (BOOL)_deleteUpdateFileWithError:(id *)a0;
- (BOOL)_onQueue_deleteUpdateFileWithError:(id *)a0;
- (BOOL)_onQueue_writeToDiskWithError:(id *)a0;
- (BOOL)_runChangeOperationNeedToRetry:(BOOL *)a0 withError:(id *)a1;
- (BOOL)_stillMostCurrentUpdate;
- (id)initWithContainerMetadata:(id)a0 newClass:(int)a1 retryingIfLocked:(BOOL)a2 changeType:(int)a3 internalChangeID:(id)a4 queue:(id)a5 userIdentityCache:(id)a6;
- (id)initWithContainerMetadata:(id)a0 newClass:(int)a1 retryingIfLocked:(BOOL)a2 changeType:(int)a3 queue:(id)a4 userIdentityCache:(id)a5;

@end
