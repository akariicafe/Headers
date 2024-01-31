@class NSMutableDictionary, SSDoubleLinkedList, NSObject, SSLogConfig;
@protocol OS_dispatch_queue;

@interface SSLRUCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *backingDictionary;
@property (retain, nonatomic) SSDoubleLinkedList *backingList;
@property (retain, nonatomic) SSLogConfig *logConfig;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize;

- (id)init;
- (void)removeAllObjects;
- (unsigned long long)_count;
- (void)_removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)description;
- (void)_addObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)allObjectsAndKeys;

@end
