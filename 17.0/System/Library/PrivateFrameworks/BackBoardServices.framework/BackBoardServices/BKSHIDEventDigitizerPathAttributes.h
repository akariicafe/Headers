@class BKSWindowServerHitTestSecurityAnalysis, BKSHIDEventAuthenticationMessage, NSString;

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable>

@property (nonatomic) long long pathIndex;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) unsigned int userIdentifier;
@property (nonatomic) unsigned char locus;
@property (nonatomic) float zGradient;
@property (nonatomic) struct CGPoint { double x; double y; } hitTestLocation;
@property (nonatomic) struct CGPoint { double x; double y; } preciseLocation;
@property (nonatomic) double hitTestLocationX;
@property (nonatomic) double hitTestLocationY;
@property (nonatomic) double preciseLocationX;
@property (nonatomic) double preciseLocationY;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (retain, nonatomic) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (void)setPreciseLocationY:(double)a0;
- (double)hitTestLocationY;
- (double)preciseLocationX;
- (double)hitTestLocationX;
- (double)preciseLocationY;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)setHitTestLocationX:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void)setHitTestLocationY:(double)a0;
- (void)setPreciseLocationX:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
