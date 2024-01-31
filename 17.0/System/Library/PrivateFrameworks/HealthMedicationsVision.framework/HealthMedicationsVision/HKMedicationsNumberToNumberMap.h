@class NSMutableDictionary;

@interface HKMedicationsNumberToNumberMap : NSObject {
    NSMutableDictionary *_storage;
}

- (id)init;
- (void)setInteger:(long long)a0 forKey:(long long)a1;
- (void).cxx_destruct;
- (long long)integerForKey:(long long)a0;

@end
