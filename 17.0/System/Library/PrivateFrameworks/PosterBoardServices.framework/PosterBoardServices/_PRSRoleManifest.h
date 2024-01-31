@class NSSet, NSString, NSDictionary, LSPropertyList;

@interface _PRSRoleManifest : NSObject <PRSRoleProviding> {
    NSString *_bundleIdentifier;
    LSPropertyList *_propertyList;
    NSDictionary *_infoDictionary;
}

@property (readonly, nonatomic) NSSet *rawSupportedRoles;
@property (readonly, nonatomic) NSSet *knownSupportedRoles;
@property (readonly, nonatomic) NSString *rawSpecifiedDefaultRole;
@property (readonly, nonatomic) NSString *derivedDefaultRole;
@property (readonly, nonatomic) NSSet *prs_supportedRoles;
@property (readonly, nonatomic) NSString *prs_defaultRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithPropertyList:(id)a0;
- (void)_hydrate;
- (id)derivedDefaultRole;
- (id)initWithInfoDictionary:(id)a0;

@end
