@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>

@property (copy, nonatomic) NSOrderedSet *sectionInfos;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (id)containers;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;

@end
