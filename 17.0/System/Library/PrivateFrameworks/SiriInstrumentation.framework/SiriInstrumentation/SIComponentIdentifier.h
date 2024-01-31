@interface SIComponentIdentifier : NSObject {
    void /* unknown type, empty encoding */ componentName;
    void /* unknown type, empty encoding */ _uuid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uuid;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(int)a0 uuid:(id)a1;
- (id)initWithName:(int)a0 schemaUUID:(id)a1;

@end
