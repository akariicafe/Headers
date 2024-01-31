@class NSString, NSMutableDictionary, BLSHLocalAssertionService;

@interface BLSHLocalAssertionAttributeHandler : NSObject <BLSHAssertionAttributeHandler> {
    NSMutableDictionary *_entries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) BLSHLocalAssertionService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entryClass;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;
+ (id)registerHandlerForService:(id)a0;

- (id)initForService:(id)a0;
- (void).cxx_destruct;
- (void)activateAttributes:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (void)deactivateAttributes:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (void)setupService;

@end
