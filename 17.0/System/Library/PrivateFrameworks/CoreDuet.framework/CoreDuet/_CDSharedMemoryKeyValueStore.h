@class NSError, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistQueue;
    NSObject<OS_os_transaction> *_persistTransaction;
    NSError *_lastPersistError;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dictionary;
    void *_mappedMem;
}

@property (readonly, nonatomic) unsigned long long size;

+ (id)sharedInstance;
+ (id)keyValueStoreWithName:(id)a0 size:(unsigned long long)a1;
+ (id)defaultName;
+ (unsigned long long)defaultSize;

- (BOOL)removeDataForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (BOOL)removeDataForKeys:(id)a0;
- (id)description;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (BOOL)syncPersistToShMem;
- (void).cxx_destruct;
- (void *)memoryPointer;
- (id)valueForKey:(id)a0;
- (id)dataForKey:(id)a0;

@end
