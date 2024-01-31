@interface SAVolumeSizer : NSObject

+ (void)computeSizeOfVolumeAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)computeSizeOfVolumeAtURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isInternalVolume:(id)a0;

@end
