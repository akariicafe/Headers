@interface DockKitCore.Vision : NSObject {
    void /* unknown type, empty encoding */ visionQueue;
    void /* unknown type, empty encoding */ faceIdentifier;
    void /* unknown type, empty encoding */ trackedObjects;
    void /* unknown type, empty encoding */ detectedObjects;
    void /* unknown type, empty encoding */ framesSinceLastDetection;
    void /* unknown type, empty encoding */ faceNameMap;
    void /* unknown type, empty encoding */ trackingEnabled;
    void /* unknown type, empty encoding */ maxRecognitionFailures;
    void /* unknown type, empty encoding */ minRecogntionSuccess;
    void /* unknown type, empty encoding */ lastTrackedFacesDict;
    void /* unknown type, empty encoding */ faceIdMap;
    void /* unknown type, empty encoding */ bodyIdMap;
    void /* unknown type, empty encoding */ faceRecognitionFailureCount;
    void /* unknown type, empty encoding */ bodyRecognitionFailureCount;
    void /* unknown type, empty encoding */ facePrintStamps;
    void /* unknown type, empty encoding */ bodyPrintStamps;
    void /* unknown type, empty encoding */ occludedBodyStamps;
    void /* unknown type, empty encoding */ facePrintHistory;
    void /* unknown type, empty encoding */ bodyPrintHistory;
    void /* unknown type, empty encoding */ newFacePrint;
    void /* unknown type, empty encoding */ newBodyPrint;
    void /* unknown type, empty encoding */ subjectCount;
    void /* unknown type, empty encoding */ streamingGallery;
    void /* unknown type, empty encoding */ vuContext;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ lastPrintExtractionStamp;
    void /* unknown type, empty encoding */ printExtractionPeriod;
    void /* unknown type, empty encoding */ deviceModelName;
    void /* unknown type, empty encoding */ unknownModality;
    void /* unknown type, empty encoding */ trackedFaceIdConfidences;
    void /* unknown type, empty encoding */ trackedBodyIdconfidences;
    void /* unknown type, empty encoding */ trackedFaceIdCounts;
    void /* unknown type, empty encoding */ trackedBodyIdCounts;
    void /* unknown type, empty encoding */ lastFaces;
    void /* unknown type, empty encoding */ lastBodies;
    void /* unknown type, empty encoding */ vuMaxObservations;
    void /* unknown type, empty encoding */ vuMaxIdentities;
    void /* unknown type, empty encoding */ faceToBodyOverlapThreshold;
    void /* unknown type, empty encoding */ vuRecognitionScoreThreshold;
    void /* unknown type, empty encoding */ vuFacePrintConfidenceThreshold;
    void /* unknown type, empty encoding */ vuBodyPrintConfidenceThreshold;
    void /* unknown type, empty encoding */ facePrintInflationRatio;
    void /* unknown type, empty encoding */ printConfidenceMaxFrames;
    void /* unknown type, empty encoding */ facePrintConfidenceMap;
    void /* unknown type, empty encoding */ bodyPrintConfidenceMap;
    void /* unknown type, empty encoding */ finalFacePrintRectSize;
    void /* unknown type, empty encoding */ finalBodyPrintRectSize;
    void /* unknown type, empty encoding */ vuLock;
    void /* unknown type, empty encoding */ countToUpdate;
    void /* unknown type, empty encoding */ maxBodyOverlap;
    void /* unknown type, empty encoding */ minFaceOverlap;
    void /* unknown type, empty encoding */ bodyOcclusionTimeout;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ camera;
}

- (id)init;
- (void).cxx_destruct;

@end
