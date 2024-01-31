@class NSMutableDictionary;

@interface HKMedicationsNumberToNumberPairListMap : NSObject {
    NSMutableDictionary *_storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)addInteger:(long long)a0 andInteger:(long long)a1 forKey:(long long)a2;
- (void)enumerateIntegersForKey:(long long)a0 block:(id /* block */)a1;

@end
