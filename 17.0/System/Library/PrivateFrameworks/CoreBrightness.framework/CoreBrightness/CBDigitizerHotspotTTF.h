@class NSMutableArray;

@interface CBDigitizerHotspotTTF : CBDigitizerHotspot {
    NSMutableArray *_buffer;
}

@property unsigned long long touchBufferWindowS;

- (id)init;
- (void)dealloc;
- (id)description;
- (float)computeBackoff:(float)a0;
- (void)setTouchReleaseTime:(float)a0;

@end
