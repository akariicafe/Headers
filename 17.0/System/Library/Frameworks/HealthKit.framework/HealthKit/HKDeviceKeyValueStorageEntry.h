@class NSString, NSData, NSDate;

@interface HKDeviceKeyValueStorageEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSData *value;
@property (readonly, copy, nonatomic) NSDate *modificationDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dateValue:(id *)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 value:(id)a2 modificationDate:(id)a3;
- (id)numberValue:(id *)a0;
- (id)stringValue:(id *)a0;

@end
