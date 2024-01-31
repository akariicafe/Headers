@class NSString, NSMutableDictionary;
@protocol IMKeyValueCollectionDelegate, IMKeyValueCollectionStorage;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying> {
    long long _batchCount;
}

@property (readonly) NSMutableDictionary *recordedChanges;
@property (readonly, nonatomic) id<IMKeyValueCollectionStorage> keyValueStorage;
@property (weak, nonatomic) id<IMKeyValueCollectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)_notifyListeners;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (long long)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setInt64:(long long)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0 withDefault:(BOOL)a1;
- (id)errorForKey:(id)a0;
- (void)_broadcastIfNeeded;
- (void)_commitBatchWrite;
- (void)_recordChange:(id)a0 forKey:(id)a1;
- (void)_startBatchWrite;
- (void)addErrorToArray:(id)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0 withDefault:(double)a1;
- (id)errorArrayForKey:(id)a0;
- (id)initWithKeyValueStorage:(id)a0;
- (long long)int64ForKey:(id)a0;
- (long long)int64ForKey:(id)a0 withDefault:(long long)a1;
- (long long)integerForKey:(id)a0 withDefault:(long long)a1;
- (id)objectForKey:(id)a0 withDefault:(id)a1;
- (void)setError:(id)a0 forKey:(id)a1;
- (void)setUint64:(long long)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0 withDefault:(id)a1;
- (unsigned long long)uint64ForKey:(id)a0;
- (unsigned long long)uint64ForKey:(id)a0 withDefault:(unsigned long long)a1;

@end
