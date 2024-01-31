@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; double ellipsoidalAltitude; BOOL fromSimulationController; } location;
@property (nonatomic) struct { double odometer; double deltaDistance; double deltaDistanceAccuracy; double timestampGps; double machtime; float horzUncSemiMaj; float horzUncSemiMin; float horzUncSemiMajAz; BOOL isFitnessMatch; int matchQuality; struct { double latitude; double longitude; } matchCoordinate; double matchCourse; int matchFormOfWay; int matchRoadClass; BOOL matchShifted; struct { double rawUnmodifiedCourse; double rawUnmodifiedCourseUnc; BOOL isStatic; BOOL isMounted; int estimatedLane; double estimatedLaneProbability; long long estimatedLaneFeatureID; double flowlineSnapLat; double flowlineSnapLon; double flowlineSnapCourse; } mapMatcherData; struct { struct { int lapCount; double currentLapStartTime; double currentLapDurationInSeconds; double currentLapDistanceInMeters; double previousLapDurationInSeconds; double previousLapDistanceInMeters; struct { double latitude; double longitude; } previousLapPositionAtCompletionInDegrees; double currentTrackRunSessionDurationInSeconds; double currentTrackRunSessionDistanceInMeters; } lapInformation; int laneNumber; unsigned long long trackId; int estimatedLaneNumber; int laneCount; int estimatedLaneConfidence; int trackProximity; double distanceToTrackMeters; BOOL odometerHasBeenCorrected; } trackRunData; struct { double value; double std; } pressure; int undulationModel; float undulation; struct { double latitude; double longitude; } specialCoordinate; double specialHorizontalAccuracy; double machContinuousTime; int originDevice; BOOL isMatcherPropagatedCoordinates; double slope; double maxAbsSlope; double groundAltitude; double groundAltitudeUncertainty; double rawHorizontalAccuracy; double rawAltitude; double rawVerticalAccuracy; double rawCourseAccuracy; BOOL isCoordinateFused; BOOL isCoordinateFusedWithVL; struct { double latitude; double longitude; } fusedCoordinate; double fusedHorizontalAccuracy; int fusedReferenceFrame; double fusedAltitude; double fusedVerticalAccuracy; double fusedCourse; double fusedCourseAccuracy; int positionContextState; double probabilityPositionContextStateIndoor; double probabilityPositionContextStateOutdoor; int batchedLocationFixType; struct { unsigned int numberOfZaxisSlamApsUsed; } wifiZaxisData; struct { int demNumContiguousFlatPoints; float confidence; } demFlatnessMetricData; } locationPrivate;
@property (retain, nonatomic) NSString *locationId;
@property (retain, nonatomic) NSString *locationDescription;
@property (nonatomic) BOOL requestsGpsAssistance;
@property (nonatomic) struct { int yieldType; double prbPipelinedSaysYield; double prbCoarseIndoorSaysIndoor; double prbWifiSaysIndoor; double prbGpsSaysIndoor; double prbParticleFilterSaysYield; double prbOnFloors; double prbOnFloor[5]; double prbInlier; double prbLocalizerIoWrapperSaysWifiOk; double prbInjectionOccupancyRetryLimitOk; double prbInjectionGainRetryLimitOk; int pfYieldStatusBeforeCalculatePose; int yieldStatusBeforeCalculatePose; } diagnosticReport;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
