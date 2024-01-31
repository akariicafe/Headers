@class NSString;

@interface CKDApplicationID : NSObject <NSCopying, CKSQLiteItem>

@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)init;
- (id)sqliteRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationBundleIdentifier:(id)a0 applicationBundleIdentifierOverrideForContainerAccess:(id)a1 applicationBundleIdentifierOverrideForNetworkAttribution:(id)a2 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)a3 applicationBundleIdentifierOverrideForTCC:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
