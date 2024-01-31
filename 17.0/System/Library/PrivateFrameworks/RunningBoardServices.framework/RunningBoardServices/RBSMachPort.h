@class NSString;

@interface RBSMachPort : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    unsigned int _port;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)portConsumingRightForPort:(unsigned int)a0;
+ (id)portForPort:(unsigned int)a0;

- (BOOL)isUsable;
- (void)dealloc;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (BOOL)isEqual:(id)a0;
- (unsigned int)port;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
