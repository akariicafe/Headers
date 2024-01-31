@interface MUTransitDeparturesDataSource : NSObject <MKTransitDeparturesDataProviderDelegate> {
    void /* unknown type, empty encoding */ mapItem;
    void /* unknown type, empty encoding */ dataProvider;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ isActive;

- (id)traitsForTransitDeparturesDataProvider:(id)a0;
- (void)transitDeparturesDataProviderDidReload:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
