@class NSString;

@interface VCVideoRule : NSObject

@property (readonly, nonatomic) int iWidth;
@property (readonly, nonatomic) int iHeight;
@property (readonly, nonatomic) float fRate;
@property (readonly, nonatomic) int iPayload;
@property (readonly, nonatomic) NSString *description;
@property (nonatomic) float fPref;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setToVideoRule:(id)a0;
- (long long)compareByPref:(id)a0;
- (id)initWithFrameWidth:(int)a0 frameHeight:(int)a1 frameRate:(float)a2;
- (id)initWithFrameWidth:(int)a0 frameHeight:(int)a1 frameRate:(float)a2 payload:(int)a3;
- (id)initWithFrameWidth:(int)a0 frameHeight:(int)a1 frameRate:(float)a2 payload:(int)a3 priority:(float)a4;
- (BOOL)isVideoFullHD;
- (void)setFrameWidth:(int)a0 frameHeight:(int)a1 frameRate:(float)a2;

@end
