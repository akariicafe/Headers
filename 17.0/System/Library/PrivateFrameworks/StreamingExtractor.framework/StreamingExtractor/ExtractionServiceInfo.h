@class NSUUID, NSString;

@interface ExtractionServiceInfo : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *pluginBundlePath;
@property (nonatomic) unsigned long long availableExtractionServiceMemory;
@property (readonly, nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } availableExtractionServiceMemoryMutex;
@property (readonly, nonatomic) struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } availableExtractionServiceMemoryCondition;

+ (id)extractionServiceInfoForPluginBundlePath:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)extractionBecameInvalid;
- (id)initWithPluginBundlePath:(id)a0;
- (id)initWithUUID:(id)a0 pluginBundlePath:(id)a1;
- (void)releaseExtractionMemory:(id)a0;
- (id)reserveExtractionMemory:(id)a0;

@end
