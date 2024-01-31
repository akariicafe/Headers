@class NSString;

@interface CCUIC2AnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>

@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) double tension;
@property (readonly, nonatomic) double friction;
@property (readonly, nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } frameRateRange;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_initWithAnimationParameters:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
