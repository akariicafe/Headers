@interface PPSQLKVStore : NSObject

+ (id)loadBlobForKey:(id)a0 transaction:(id)a1;
+ (void)storeBlob:(id)a0 forKey:(id)a1 transaction:(id)a2;
+ (void)setString:(id)a0 forKey:(id)a1 transaction:(id)a2;
+ (void)setNumber:(id)a0 forKey:(id)a1 transaction:(id)a2;
+ (void)removeBlobForKey:(id)a0 transaction:(id)a1;
+ (id)numberForKey:(id)a0 transaction:(id)a1;
+ (id)stringForKey:(id)a0 transaction:(id)a1;

@end
