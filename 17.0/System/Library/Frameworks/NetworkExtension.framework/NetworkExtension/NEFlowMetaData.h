@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL fastOpenRequested;
@property (readonly) BOOL multipathRequested;
@property (readonly) NSData *sourceAppUniqueIdentifier;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSUUID *filterFlowIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
