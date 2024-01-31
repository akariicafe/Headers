@interface DICVolumeController : NSObject

- (BOOL)setVolumeForCategory:(id)a0 volume:(float)a1 error:(id *)a2;
- (BOOL)setVolumeForPhoneCall:(float)a0 error:(id *)a1;
- (id)volumeForCategory:(id)a0 error:(id *)a1;
- (id)volumeForPhoneCallWithError:(id *)a0;

@end
