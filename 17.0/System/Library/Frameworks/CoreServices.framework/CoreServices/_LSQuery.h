@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (id)init;
- (unsigned long long)hash;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (BOOL)_remoteResolutionIsExpensive;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;

@end
