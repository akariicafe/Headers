@interface OISpotlightImporter : NSObject

- (id)init;
- (id)searchableAttributesForOfficeFileAtURL:(id)a0 error:(id *)a1;
- (void)addPackagePropertiesFromReader:(id)a0 toSearchableAttributes:(id)a1;
- (id)searchableAttributesForXMLOfficeFileOfType:(unsigned long long)a0 atURL:(id)a1 error:(id *)a2;
- (id)sheetNamesFromWorkbookPart:(id)a0;
- (id)textContentForReader:(id)a0 withType:(unsigned long long)a1;
- (id)textContentFromExcelReader:(id)a0;
- (id)textContentFromPowerPointReader:(id)a0;
- (id)textContentFromWordReader:(id)a0;
- (id)textFromElementsNamed:(const char *)a0 skippingElementsNamed:(const char *)a1 insertingNewlinesOnElementsNamed:(const char *)a2 tabulationsOnElementsNamed:(const char *)a3 inNamespaces:(const char **)a4 inPackagePart:(id)a5;

@end
