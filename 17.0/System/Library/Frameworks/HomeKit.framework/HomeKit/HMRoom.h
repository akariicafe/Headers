@class NSString, _HMContext, NSUUID, NSArray, HMApplicationData, HMHome;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

- (id)init;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void)_unconfigure;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_recomputeAssistantIdentifier;
- (void)_unconfigureContext;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)recomputeAssistantIdentifier;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;

@end
