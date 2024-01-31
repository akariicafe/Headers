@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithTransactionNumber:(id)a0 andStoreID:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)storeTokens;

@end
