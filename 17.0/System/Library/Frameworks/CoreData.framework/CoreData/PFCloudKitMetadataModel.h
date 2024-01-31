@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_invalidateStaticCaches;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;
+ (id)ancillaryModelNamespace;
+ (void)initialize;
+ (unsigned long long)ancillaryEntityCount;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;
+ (unsigned long long)ancillaryEntityOffset;


@end
