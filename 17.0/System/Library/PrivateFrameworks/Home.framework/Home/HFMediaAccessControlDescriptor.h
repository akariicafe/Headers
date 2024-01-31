@class NSString, NAIdentity;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) unsigned long long access;
@property (readonly, nonatomic) BOOL accessSupportsPassword;
@property (readonly, nonatomic) BOOL accessRequiresPassword;
@property (readonly, copy, nonatomic) NSString *accessPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorWithAccess:(unsigned long long)a0 requiresPassword:(BOOL)a1 password:(id)a2;
+ (BOOL)accessClassificationSupportsPassword:(unsigned long long)a0;
+ (id)defaultAccessControl;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccess:(unsigned long long)a0 requiresPassword:(BOOL)a1 password:(id)a2;

@end
