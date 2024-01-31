@interface CAMConflictingControlConfiguration : NSObject

@property (readonly, nonatomic) long long desiredFlashMode;
@property (readonly, nonatomic) long long desiredHDRMode;
@property (readonly, nonatomic) long long flashAndHDRConflictingControl;
@property (readonly, nonatomic) long long desiredLivePhotoMode;
@property (readonly, nonatomic) long long desiredRAWMode;
@property (readonly, nonatomic) long long desiredPhotoResolution;
@property (readonly, nonatomic) unsigned long long photoFormatConflicts;
@property (readonly, nonatomic) unsigned long long desiredLowLightControlMode;
@property (readonly, nonatomic) unsigned long long lowLightConflicts;

+ (unsigned long long)resolveDesiredLowLightControlMode:(unsigned long long)a0 lowLightConflicts:(unsigned long long)a1 resolvedFlashMode:(long long)a2;
+ (void)resolveDesiredFlashMode:(long long)a0 desiredHDRMode:(long long)a1 primaryConflictingControl:(long long)a2 device:(long long)a3 toFlashMode:(long long *)a4 HDRMode:(long long *)a5;
+ (void)resolveDesiredRAWMode:(long long)a0 photoFormatConflicts:(unsigned long long)a1 desiredLivePhotoMode:(long long)a2 desiredFlashMode:(long long)a3 toRAWMode:(long long *)a4 toLivePhotoMode:(long long *)a5 toFlashMode:(long long *)a6;

- (id)initWithDesiredFlashMode:(long long)a0 desiredHDRMode:(long long)a1 flashAndHDRConflictingControl:(long long)a2 desiredLivePhotoMode:(long long)a3 desiredRAWMode:(long long)a4 desiredPhotoResolution:(long long)a5 photoFormatConflicts:(unsigned long long)a6 desiredLowLightControlMode:(unsigned long long)a7 lowLightConflicts:(unsigned long long)a8;

@end
