@class NSString, CAFenceHandle;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, BSXPCSecureCoding, NSSecureCoding, NSCopying, BSInvalidatable> {
    CAFenceHandle *_caFence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)newFenceHandleForContext:(id)a0;
+ (id)newFenceHandleForCAFenceHandle:(id)a0;

- (id)CAFenceHandle;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)invalidate;
- (id)initWithXPCDictionary:(id)a0;
- (unsigned int)CAPort;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)_initWithCAFenceHandle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
