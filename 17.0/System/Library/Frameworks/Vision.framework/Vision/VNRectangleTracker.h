@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VNRectangleTracker : VNTracker {
    NSMutableDictionary *_cornerTrackersImpl;
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;
}

+ (Class)trackerObservationClass;
+ (id)_trackingRectAroundPoint:(struct CGPoint { double x0; double x1; })a0 trackingRectSize:(struct CGSize { double x0; double x1; })a1;
+ (id)trackedCorners;
+ (id)supportedComputeDevicesForOptions:(id)a0 error:(id *)a1;

- (BOOL)reset:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isTracking;
- (id)_convertCornerObservationsToRectangleObservation:(id)a0 error:(id *)a1;
- (id)_parseInputObservations:(id)a0 imageBuffer:(id)a1 error:(id *)a2;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;

@end
