@interface MSServerEvaluationStatus : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _arpStatus;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rapStatus;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL arpStatus;
@property (nonatomic) long long positionIndex;
@property (nonatomic) BOOL rapStatus;

- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 arpStatus:(BOOL)a1 positionIndex:(long long)a2 rapStatus:(BOOL)a3;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
