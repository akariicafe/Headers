@class HDDeviceContext, NSArray;

@interface HDDeviceKeyValueStorageGroup : NSObject

@property (readonly, nonatomic) HDDeviceContext *deviceContext;
@property (readonly, nonatomic) NSArray *storageEntries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceContext:(id)a0 storageEntries:(id)a1;

@end
