@interface CalDAVPrincipalSearchSupport : NSObject

+ (id)nameForWellKnownType:(int)a0;
+ (id)namespaceAndNameForWellKnownType:(int)a0;
+ (id)namespaceForWellKnownType:(int)a0;
+ (id)parserMappingsWithServerSupportSet:(id)a0 includeEmail:(BOOL)a1;
+ (id)propertySearchItemForWellKnownType:(int)a0;
+ (id)resultTypeForRecordType:(id)a0;

@end
