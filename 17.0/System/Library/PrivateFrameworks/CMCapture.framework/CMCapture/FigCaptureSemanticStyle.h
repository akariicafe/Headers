@class NSString;

@interface FigCaptureSemanticStyle : NSObject <FigXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float toneBias;
@property (readonly, nonatomic) float mappedToneBias;
@property (readonly, nonatomic) float warmthBias;
@property (readonly, nonatomic) float mappedWarmthBias;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityStyle;
+ (id)semanticStyleWithToneBias:(float)a0 warmthBias:(float)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
