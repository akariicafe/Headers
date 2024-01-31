@class NSString, NSSet, TSUColor;

@interface TSPDocumentResourceInfo : NSObject <NSCopying, TSUCloudKitResourceInfo>

@property (readonly, copy, nonatomic) NSString *digestString;
@property (readonly, copy, nonatomic) NSString *locator;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, copy, nonatomic) TSUColor *fallbackColor;
@property (readonly, nonatomic) NSString *assetFieldName;
@property (readonly, nonatomic) long long assetFieldType;
@property (readonly, nonatomic) NSString *assetFilename;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) unsigned long long estimatedResourceSize;
@property (readonly, nonatomic) NSSet *resourceTags;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDigestString:(id)a0 locator:(id)a1 fileExtension:(id)a2 fileSize:(unsigned long long)a3 tags:(id)a4 pixelSize:(struct CGSize { double x0; double x1; })a5 fallbackColor:(id)a6;
- (BOOL)isEqualToDocumentResourceInfo:(id)a0;

@end
