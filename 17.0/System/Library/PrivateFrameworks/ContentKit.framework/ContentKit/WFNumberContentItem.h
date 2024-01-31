@class NSString, NSDictionary, WFFileType, WFObjectType, NSNumber;

@interface WFNumberContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) NSNumber *maximumFractionDigitsForDisplay;
@property (readonly, nonatomic) NSNumber *number;
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

+ (BOOL)supportsSecureCoding;
+ (id)typeDescription;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)itemWithNumber:(id)a0 maximumFractionDigitsForDisplay:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)copyStateToItem:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)roundedName;

@end
