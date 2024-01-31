@class HMApplicationData, NSString, _HMContext, HMMutableArray, NSUUID, NSArray, HMHome;

@interface HMServiceGroup : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (retain, nonatomic) HMMutableArray *currentServices;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

+ (id)logCategory;

- (id)init;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addOrRemove:(BOOL)a0 service:(id)a1 completionHandler:(id /* block */)a2;
- (void)_recomputeAssistantIdentifier;
- (void)_removeServices:(id)a0;
- (void)_unconfigureContext;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)addService:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)recomputeAssistantIdentifier;
- (void)removeService:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;

@end
