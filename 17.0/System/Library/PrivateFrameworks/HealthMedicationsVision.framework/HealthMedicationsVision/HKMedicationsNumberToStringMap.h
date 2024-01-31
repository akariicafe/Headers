@class NSMutableDictionary;

@interface HKMedicationsNumberToStringMap : NSObject {
    NSMutableDictionary *_storage;
}

- (void)setString:(id)a0 forKey:(long long)a1;
- (id)init;
- (long long)count;
- (void).cxx_destruct;
- (id)stringForKey:(long long)a0;

@end
