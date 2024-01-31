@class NSString;

@interface SBHSimpleApplicationDataSource : NSObject <SBHIconModelApplicationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allApplicationPlaceholdersForIconModel:(id)a0;
- (id)iconModel:(id)a0 applicationWithBundleIdentifier:(id)a1;
- (id)allApplicationsForIconModel:(id)a0;
- (id)makeApplicationWithRecord:(id)a0;
- (id)simpleApplicationsWithEnumeratorOptions:(unsigned long long)a0;

@end
