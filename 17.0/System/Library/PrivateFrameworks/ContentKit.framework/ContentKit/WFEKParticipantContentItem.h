@class WFParticipant, NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFParticipant *participant;
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
+ (id)possibleTypes;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterDescription;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)contactCoercionHandler;
+ (id)emailAddressCoercionHandler;
+ (id)possibleRoles;
+ (id)possibleStatuses;

- (id)emailAddress;
- (id)role;
- (id)status;
- (id)type;
- (BOOL)isCurrentUser;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
