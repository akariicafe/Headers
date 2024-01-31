@class NSString, NSSet, PGGraphPersonNode, PGGraphNode;
@protocol PGGraphLocationOrArea;

@interface PGLocationSummarizedFeature : NSObject <PGSummarizedFeature>

@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) PGGraphNode<PGGraphLocationOrArea> *locationNode;
@property (readonly, nonatomic) PGGraphPersonNode *personNode;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) BOOL isMandatoryForKeyAsset;
@property (readonly, nonatomic) NSSet *intervalsPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)summarizedFeatureSubtypeForLocationNode:(id)a0;

- (void).cxx_destruct;
- (id)initWithSubtype:(unsigned short)a0 intervalsPresent:(id)a1 numberOfAssets:(unsigned long long)a2 isMandatoryForKeyAsset:(BOOL)a3 locationNode:(id)a4;
- (id)initWithSubtype:(unsigned short)a0 intervalsPresent:(id)a1 numberOfAssets:(unsigned long long)a2 isMandatoryForKeyAsset:(BOOL)a3 locationNode:(id)a4 personNode:(id)a5 locationName:(id)a6;

@end
