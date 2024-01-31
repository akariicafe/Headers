@class NSString, GCVersion;

@interface _GCConfigurationBundle : NSBundle <NSCopying>

@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;
@property (readonly) NSString *configurationType;
@property (readonly) GCVersion *compatibilityVersion;

- (id)initWithPath:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
