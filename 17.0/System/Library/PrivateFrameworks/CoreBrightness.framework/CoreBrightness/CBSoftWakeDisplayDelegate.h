@class NSObject;
@protocol OS_os_log;

@interface CBSoftWakeDisplayDelegate : NSObject {
    NSObject<OS_os_log> *_logHandle;
    long long _state;
    struct __DisplayFactorFade { double period; double startTime; float Ftarget; float Fcurrent; float Fstart; float coeff[3]; void /* function */ *rampDoneCallback; void *refcon; } _fade;
}

@property (readonly, nonatomic) struct __DisplayFactorFade { double x0; double x1; float x2; float x3; float x4; float x5[3]; void /* function */ *x6; void *x7; } *fade;

+ (BOOL)isSupported;

- (id)init;
- (void)dealloc;
- (BOOL)isActive;
- (long long)action:(long long)a0;
- (long long)setFactor:(float)a0 withFade:(float)a1;

@end
