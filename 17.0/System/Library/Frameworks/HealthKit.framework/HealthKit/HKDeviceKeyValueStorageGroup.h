@class HKDeviceContext, NSArray;

@interface HKDeviceKeyValueStorageGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKDeviceContext *deviceContext;
@property (readonly, nonatomic) NSArray *storageEntries;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceContext:(id)a0 storageEntries:(id)a1;

@end
