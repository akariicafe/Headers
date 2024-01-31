@class NSData;

@interface MapsSync.MapsSyncAnalyticsIdentifier : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _data;
}

@property (nonatomic, readonly) NSData *data;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
