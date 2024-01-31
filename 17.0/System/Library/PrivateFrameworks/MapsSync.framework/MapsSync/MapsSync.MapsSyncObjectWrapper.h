@interface MapsSync.MapsSyncObjectWrapper : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _managedObjectID;
    void /* unknown type, empty encoding */ _entityName;
    void /* unknown type, empty encoding */ _editContext;
    void /* unknown type, empty encoding */ _callbackQueue;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
