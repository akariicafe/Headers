@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject {
    int _seriesIndex;
    int _fillPropertyType;
}

@property (readonly, nonatomic) NSString *textureSetID;
@property (readonly, nonatomic) NSString *textureSetFilename;
@property (readonly, nonatomic) unsigned long long seriesIndex;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)identifierWithContentsOfDictionary:(id)a0;
+ (id)identifierWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
+ (id)identifierWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
+ (id)instanceWithDEPRECATEDArchive:(const void *)a0 unarchiver:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)setSeriesIndex:(unsigned long long)a0;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)localDirectoryPath;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)countOfSeriesInFillSet;
- (int)fillPropertyTypeFromName:(id)a0;
- (id)initWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
- (id)initWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
- (BOOL)isOnDemandResource;
- (BOOL)isSageCompatible;
- (BOOL)isStoredInLocalBundle;
- (id)loadPropertiesDictionary;
- (id)lowResLocalDirectoryPath;
- (id)lowResTextureSetFilename;
- (id)mipmapLocalDirectoryPath;
- (id)mipmapOnDemandResourceTag;
- (id)mipmapTextureSetFilename;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageFillPropertyNames;
- (id)p_sageFillSetList;
- (id)p_sageSeriesNames;
- (id)p_version;
- (id)sageFillName;
- (id)sageSeriesName;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)a0;
- (id)textureOnDemandResourceTag;

@end
