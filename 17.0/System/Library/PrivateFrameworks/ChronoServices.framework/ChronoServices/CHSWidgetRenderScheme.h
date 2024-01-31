@class NSString;

@interface CHSWidgetRenderScheme : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying> {
    unsigned long long _renderingModes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly, nonatomic) unsigned long long backgroundViewPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)isOpaque;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_compatibilityRenderSchemesFromDeprecatedRenderingModes;
- (id)initWithRenderingMode:(unsigned long long)a0;
- (id)initWithRenderingMode:(unsigned long long)a0 backgroundViewPolicy:(unsigned long long)a1;
- (id)initWithRenderingModes:(unsigned long long)a0;
- (id)initWithRenderingModes:(unsigned long long)a0 backgroundViewPolicy:(unsigned long long)a1;
- (id)initWithRenderingModes:(unsigned long long)a0 opaque:(BOOL)a1;
- (unsigned long long)renderingModes;

@end
