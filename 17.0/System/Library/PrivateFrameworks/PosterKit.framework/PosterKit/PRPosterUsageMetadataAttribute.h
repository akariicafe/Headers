@class NSString, NSDate;

@interface PRPosterUsageMetadataAttribute : NSObject <PRPosterRoleAttribute>

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSDate *lastSelectedDate;
@property (readonly, nonatomic) NSDate *lastActivatedDate;
@property (readonly, nonatomic) NSString *attributeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeObjectWithJSON:(id)a0;

- (id)init;
- (id)encodeJSON;
- (void).cxx_destruct;
- (id)usageMetadataForUpdatedLastActivatedDate:(id)a0;
- (id)usageMetadataForUpdatedLastModifiedDate:(id)a0;
- (id)usageMetadataWithUpdatedLastActivatedDate;
- (id)usageMetadataWithUpdatedLastModifiedDate;
- (id)usageMetadataWithUpdatedLastSelectedDate;

@end
