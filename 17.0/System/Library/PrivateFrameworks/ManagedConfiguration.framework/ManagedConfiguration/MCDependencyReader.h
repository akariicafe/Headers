@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict;
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict;

+ (id)systemStoragePath;
+ (id)userStoragePath;
+ (id)sharedReader;
+ (void)setSystemStoragePath:(id)a0 userStoragePath:(id)a1;

- (void)invalidateCache;
- (id)init;
- (id)memberQueueParentsInDomain:(id)a0;
- (id)memberQueueDependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)parentsInDomain:(id)a0;
- (id)_init;
- (id)memberQueueParentsInUserDomain:(id)a0;
- (id)memberQueueParentsInSystemDomain:(id)a0;
- (id)systemDomainsDict;
- (id)memberQueueDependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)memberQueueDependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)userDomainsDict;
- (void).cxx_destruct;
- (id)parentsInSystemDomain:(id)a0;
- (void)memberQueueRereadDomainsDict;
- (id)dependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)dependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (void)memberQueueRereadUserDomainsDict;
- (id)dependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)parentsInUserDomain:(id)a0;
- (void)memberQueueRereadSystemDomainsDict;

@end
