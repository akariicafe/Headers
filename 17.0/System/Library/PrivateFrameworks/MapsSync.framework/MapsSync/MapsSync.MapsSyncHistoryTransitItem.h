@class NSString, NSData;

@interface MapsSync.MapsSyncHistoryTransitItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _transitLineStorage;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *transitLineItemStorageData;
@property (nonatomic, readonly) unsigned long long muid;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
