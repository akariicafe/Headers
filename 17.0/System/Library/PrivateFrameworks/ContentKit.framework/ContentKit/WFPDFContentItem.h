@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (void)getPDFFromPrintFormatters:(id)a0 nameIfKnown:(id)a1 matchingInputSize:(BOOL)a2 withMargin:(BOOL)a3 startingAtPage:(long long)a4 endingAtPage:(long long)a5 completionHandler:(id /* block */)a6;
+ (id)itemWithPrintFormatters:(id)a0 names:(id)a1;

- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)enumeratePagesInDocument:(id)a0 block:(id /* block */)a1;
- (void)createImageWithFileType:(id)a0 colorspace:(struct CGColorSpace { } *)a1 resolution:(double)a2 completion:(id /* block */)a3;
- (void)getPDF:(id /* block */)a0 matchingInputSize:(BOOL)a1 withMargin:(BOOL)a2 startingAtPage:(long long)a3 endingAtPage:(long long)a4;

@end
