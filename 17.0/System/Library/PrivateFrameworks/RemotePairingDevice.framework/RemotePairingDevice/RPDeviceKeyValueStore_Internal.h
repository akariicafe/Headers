@class NSString;

@interface RPDeviceKeyValueStore_Internal : NSObject {
    void /* unknown type, empty encoding */ kvs;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)getValueWithDomain:(id)a0 key:(id)a1;
- (id)getKeyValuePairsWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)isValueSensitiveWithDomain:(id)a0 key:(id)a1;

@end
