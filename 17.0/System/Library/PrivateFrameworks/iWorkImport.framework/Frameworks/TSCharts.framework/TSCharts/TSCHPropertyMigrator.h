@class TSUIntegerKeyDictionary, TSUIntToIntDictionary, TSSPropertySet;

@interface TSCHPropertyMigrator : NSObject {
    TSSPropertySet *_propertiesToForce;
    TSUIntToIntDictionary *_shouldForceFlags;
    TSUIntegerKeyDictionary *_valuesToForce;
}

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (void)migrateToSeries:(id)a0;
- (void)visitExistingSeries:(id)a0;

@end
