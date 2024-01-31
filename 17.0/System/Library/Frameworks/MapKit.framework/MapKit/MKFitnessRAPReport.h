@class GEORPFeedbackRequestParameters;

@interface MKFitnessRAPReport : NSObject {
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
}

@property (readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters;

- (void).cxx_destruct;
- (id)initForRunningTrackIssue:(unsigned long long)a0 trackCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 trackFeatureID:(id)a2 nameOfTrack:(id)a3 numberOfLanes:(id)a4 comment:(id)a5;
- (int)optionKeyForTrackIssue:(unsigned long long)a0;

@end
