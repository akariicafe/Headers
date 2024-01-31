@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;

- (id)serializedRepresentation;
- (id)init;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)dealloc;
- (id)internalDescription;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)pid;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0;
- (id)idString;
- (id)displayNameAndPID;
- (id)initWithIDString:(id)a0 displayName:(id)a1;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;
- (unsigned long long)pid64;

@end
