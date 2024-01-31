@class NSString;

@interface MSIncidentReport : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _type;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic) short type;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 countryCode:(id)a1 positionIndex:(long long)a2 type:(short)a3;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
