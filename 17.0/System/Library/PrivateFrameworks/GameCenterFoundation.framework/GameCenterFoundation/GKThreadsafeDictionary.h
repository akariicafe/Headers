@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyWillReplace:(id)a0 objectProducerBlock:(id /* block */)a1;
- (id)allKeys;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryCopy;
- (void)readFromDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)allObjects;
- (void)writeToDictionary:(id /* block */)a0;
- (id)description;
- (id)objectForKey:(id)a0 objectProducerBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;

@end
