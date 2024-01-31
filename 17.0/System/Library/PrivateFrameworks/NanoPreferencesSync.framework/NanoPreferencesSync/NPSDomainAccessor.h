@class NSString, NSUUID, NPSDomainAccessorInternal, NSObject;
@protocol OS_dispatch_queue;

@interface NPSDomainAccessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invalidationQueue;
@property (retain, nonatomic) NPSDomainAccessorInternal *internalAccessor;
@property (nonatomic) BOOL initializedWithActiveDevice;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSUUID *pairingID;

+ (void)resolveActivePairedDevicePairingID:(id *)a0 pairingDataStore:(id *)a1;
+ (void)initialize;
+ (id)copyDomainList;
+ (id)copyDomainListForPairingID:(id)a0 pairingDataStore:(id)a1;

- (id)initWithDomain:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (void)invalidate;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (long long)longForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)synchronize;
- (id)stringForKey:(id)a0;
- (id)queue;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1;
- (id)stringArrayForKey:(id)a0;
- (id)initWithDomain:(id)a0 pairedDevice:(id)a1;
- (BOOL)boolForKey:(id)a0 keyExistsAndHasValidFormat:(BOOL *)a1;
- (void)objectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresDeviceUnlockedSinceBoot;
- (id)shouldNotDoWork;
- (BOOL)activeDeviceChanged;
- (id)copyKeyList;
- (unsigned long long)domainSize;
- (double)doubleForKey:(id)a0 keyExistsAndHasValidFormat:(BOOL *)a1;
- (float)floatForKey:(id)a0 keyExistsAndHasValidFormat:(BOOL *)a1;
- (id)initWithDomain:(id)a0 pairingID:(id)a1 pairingDataStore:(id)a2;
- (id)initWithDomain:(id)a0 queue:(id)a1;
- (id)initWithDomain:(id)a0 queue:(id)a1 pairingID:(id)a2 pairingDataStore:(id)a3;
- (id)initWithInternalDomainAccessor:(id)a0 queue:(id)a1;
- (long long)integerForKey:(id)a0 keyExistsAndHasValidFormat:(BOOL *)a1;
- (long long)longForKey:(id)a0 keyExistsAndHasValidFormat:(BOOL *)a1;
- (void)setObject:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;

@end
