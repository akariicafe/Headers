@class TRIKVStore;

@interface TRIFetchDateManager : NSObject <TRIDateProviding> {
    TRIKVStore *_keyValueStore;
}

+ (id)kvstoreKeyForType:(unsigned char)a0 container:(int)a1 teamId:(id)a2;
+ (id)managerWithKeyValueStore:(id)a0;

- (id)init;
- (id)initWithKeyValueStore:(id)a0;
- (void).cxx_destruct;
- (id)lastFetchDateWithType:(unsigned char)a0 container:(int)a1 teamId:(id)a2;
- (void)setLastFetchDate:(id)a0 type:(unsigned char)a1 container:(int)a2 teamId:(id)a3;

@end
