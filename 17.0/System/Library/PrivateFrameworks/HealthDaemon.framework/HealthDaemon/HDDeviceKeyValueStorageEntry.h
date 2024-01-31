@class NSString, NSData, NSDate, HDSyncIdentity;

@interface HDDeviceKeyValueStorageEntry : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSData *value;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;
@property (readonly, nonatomic) long long protectionCategory;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dateValue:(id *)a0;
- (id)numberValue:(id *)a0;
- (id)stringValue:(id *)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 value:(id)a2 modificationDate:(id)a3 syncIdentity:(id)a4 category:(long long)a5;

@end
