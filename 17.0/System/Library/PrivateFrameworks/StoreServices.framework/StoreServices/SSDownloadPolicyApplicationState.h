@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSSet *applicationStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)addApplicationState:(long long)a0;
- (void)setNotRunningApplicationStates;

@end
