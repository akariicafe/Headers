@class CAUserAdjustment;

@interface CADisplayPreset : NSObject

@property (readonly) BOOL allowTrueTone;
@property (readonly) BOOL allowNightShift;
@property (readonly) BOOL allowAutoBrightness;
@property (readonly) double minSliderBrightness;
@property (readonly) double maxSliderBrightness;
@property (readonly) BOOL isReference;
@property (readonly) CAUserAdjustment *userAdjustment;

- (void)dealloc;
- (void)applyUserAdjustmentCommand:(id)a0;
- (id)initWithIsReference:(BOOL)a0 userAdjustment:(id)a1;
- (id)userAdjustmentCommand;

@end
