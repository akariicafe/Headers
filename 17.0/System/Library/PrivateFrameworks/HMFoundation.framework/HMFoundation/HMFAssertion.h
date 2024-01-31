@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *uniqueDescription;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIdentifier;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)a0;
- (void)mark;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)acquire:(id *)a0;

@end
