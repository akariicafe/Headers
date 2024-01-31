@class NSURL, PRSServerPosterIdentity, NSString;

@interface PRSServerPosterPath : PRSPosterPath

@property (readonly, copy, nonatomic) PRSServerPosterIdentity *identity;
@property (readonly, copy, nonatomic) NSURL *providerURL;
@property (readonly, copy, nonatomic) NSURL *typeURL;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) NSURL *versionsURL;
@property (readonly, copy, nonatomic) NSURL *instanceURL;
@property (readonly, copy, nonatomic) NSURL *supplementURL;
@property (readonly, copy, nonatomic) NSString *identityPathComponent;
@property (readonly, nonatomic, getter=isPersistable) BOOL persistable;

+ (id)pathWithContainerURL:(id)a0 identity:(id)a1;
+ (id)pathWithProviderURL:(id)a0 identity:(id)a1;

- (BOOL)isServerPosterPath;
- (id)extendInstanceReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToPersistable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)containerURL;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;

@end
