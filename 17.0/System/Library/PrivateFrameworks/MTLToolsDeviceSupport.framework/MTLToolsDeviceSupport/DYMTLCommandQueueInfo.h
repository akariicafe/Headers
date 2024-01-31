@class NSString;

@interface DYMTLCommandQueueInfo : NSObject <DYCapturableObject, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (readonly, nonatomic) unsigned long long deviceAddress;
@property (readonly, nonatomic) unsigned long long deviceStreamRef;
@property (readonly, nonatomic) unsigned long long queueAddress;
@property (readonly, nonatomic) unsigned long long toolsQueueAddress;
@property (readonly, nonatomic) NSString *label;
@property (nonatomic) BOOL canBeCaptured;
@property (nonatomic) BOOL isOpenGLQueue;
@property (nonatomic) BOOL isInternalQueue;
@property (readonly, nonatomic) NSString *capturableObjectType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capturableObjectType;
+ (BOOL)isLabelAppleInternal:(const char *)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
