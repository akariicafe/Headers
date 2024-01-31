@class NSDictionary, NSData, NSObject, HIDUserDevice;
@protocol OS_dispatch_queue;

@interface AXSSMotionTrackingVirtualEyeTracker : NSObject

@property (class, readonly, copy, nonatomic) NSDictionary *_eyeTrackerHIDDeviceProperties;
@property (class, readonly, copy, nonatomic) NSData *_eyeTrackerHIDReportDescriptorData;

@property (nonatomic) BOOL _activated;
@property (retain, nonatomic) HIDUserDevice *_hidUserDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidUserDeviceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_reportingQueue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;

+ (id)_hidReportWithButtonDown:(BOOL)a0;
+ (id)_hidReportWithPoint:(struct CGPoint { double x0; double x1; })a0 reportID:(unsigned long long)a1 timestamp:(unsigned long long)a2 version:(unsigned long long)a3;
+ (id)_hidReportWithStatusChange:(unsigned long long)a0;

- (void)dealloc;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)changeStatusTo:(unsigned long long)a0;
- (void)_activateOnReportingQueue;
- (void)_changeStatusOnReportingQueueTo:(unsigned long long)a0;
- (void)_clickOnReportingQueueWithButtonDown:(BOOL)a0;
- (void)_deactivateOnReportingQueue;
- (void)_moveOnReportingQueueToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)click;
- (id)initWithScreenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
