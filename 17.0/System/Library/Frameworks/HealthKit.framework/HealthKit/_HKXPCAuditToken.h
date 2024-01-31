@class NSString;

@interface _HKXPCAuditToken : NSObject <NSCopying>

@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) NSString *signingIdentifier;

+ (id)signingIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)auditTokenForCurrentTask;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
