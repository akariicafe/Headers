@interface AXMAVUtilities : NSObject

+ (struct { int x0; int x1; })videoDimensionsForDeviceFormat:(id)a0;
+ (BOOL)isMirroredVideoDevice:(id)a0;
+ (id)videoDeviceFromConnection:(id)a0;

@end
