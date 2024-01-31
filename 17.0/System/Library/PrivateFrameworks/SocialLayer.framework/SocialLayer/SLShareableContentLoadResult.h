@class NSString, SLSecurityScopedURL, NSData, NSError;

@interface SLShareableContentLoadResult : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *archivedObjectClassName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) Class archivedObjectClass;
@property (readonly, nonatomic) SLSecurityScopedURL *urlWrapper;
@property (readonly, nonatomic) BOOL wasOpenedInPlace;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithError:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)resultWithData:(id)a0 archivedObjectClass:(Class)a1 urlWrapper:(id)a2 wasOpenedInPlace:(BOOL)a3 error:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWithData:(id)a0 archivedObjectClassName:(id)a1 urlWrapper:(id)a2 wasOpenedInPlace:(BOOL)a3 error:(id)a4;

@end
