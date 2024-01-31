@class KalmanFilterPrivate;

@interface KalmanFilter : NSObject {
    BOOL _isFirstObservation;
    KalmanFilterPrivate *_kalmanFilterX;
    KalmanFilterPrivate *_kalmanFilterY;
    KalmanFilterPrivate *_kalmanFilterWidth;
    KalmanFilterPrivate *_kalmanFilterHeight;
}

@property (readonly, nonatomic) int oid;

- (id)init;
- (void).cxx_destruct;
- (void)addObservation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })estimatedBounds;

@end
