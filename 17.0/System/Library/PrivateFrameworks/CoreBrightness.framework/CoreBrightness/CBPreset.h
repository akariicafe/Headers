@interface CBPreset : NSObject

@property (readonly) BOOL trueToneDisabled;
@property (readonly) BOOL nightShiftDisabled;
@property (readonly) BOOL autoBrighnessDisabled;
@property (readonly) BOOL brightnessDisabled;
@property (readonly) BOOL referenceMode;

+ (id)newActive:(unsigned long long)a0;

- (id)initWithCAPreset:(id)a0;

@end
