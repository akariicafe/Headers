@class NSUUID, NSManagedObject, NSDate, NSManagedObjectContext;

@interface MapsSync.MapsSyncMutableBaseItem : NSObject {
    void /* unknown type, empty encoding */ _proxyObject;
}

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSManagedObject *proxyObject;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long positionIndex;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
