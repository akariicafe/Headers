@class NSString, NSDictionary, ATXFaceGalleryItem, NSDate;

@interface PRPosterSuggestionMetadata : NSObject <PRPosterRoleAttribute, BSDescriptionStreamable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem;
@property (readonly, copy, nonatomic) NSDictionary *suggestedComplicationsByIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeObjectWithJSON:(id)a0;

- (id)initWithSuggestedGalleryItem:(id)a0 suggestedComplicationsByIdentifier:(id)a1 lastModifiedDate:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)encodeJSON;
- (id)metadataBySettingLastModifiedDateToNow;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLastModifiedDate:(id)a0;

@end
