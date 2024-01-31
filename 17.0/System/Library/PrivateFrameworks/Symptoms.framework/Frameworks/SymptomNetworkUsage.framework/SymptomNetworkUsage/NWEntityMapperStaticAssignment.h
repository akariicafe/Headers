@class NSMutableDictionary;

@interface NWEntityMapperStaticAssignment : NWEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (id)initWithFlavor:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;

@end
