@class NSString;

@interface HMDTimer : NSObject <HMDTimerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;

@end
