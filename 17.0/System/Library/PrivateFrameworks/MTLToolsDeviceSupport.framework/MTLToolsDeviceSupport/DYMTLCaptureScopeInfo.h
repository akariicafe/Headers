@class NSString;

@interface DYMTLCaptureScopeInfo : NSObject <DYCapturableObject, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deviceAddress;
@property (readonly, nonatomic) unsigned long long scopeAddress;
@property (readonly, nonatomic) unsigned long long scopeStreamRef;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *capturableObjectType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long streamRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capturableObjectType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCaptureScope:(id)a0;

@end
