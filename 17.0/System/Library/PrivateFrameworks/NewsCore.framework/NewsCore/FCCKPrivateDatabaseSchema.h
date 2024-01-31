@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}

- (id)init;
- (void).cxx_destruct;

@end
