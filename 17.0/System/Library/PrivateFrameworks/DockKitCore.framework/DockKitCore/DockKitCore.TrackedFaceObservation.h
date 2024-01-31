@interface DockKitCore.TrackedFaceObservation : NSObject {
    void /* unknown type, empty encoding */ trackingRequest;
    void /* unknown type, empty encoding */ sequenceRequestHandler;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ confidence;
    void /* unknown type, empty encoding */ modality;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ trackerId;
    void /* unknown type, empty encoding */ groupId;
    void /* unknown type, empty encoding */ recognized;
    void /* unknown type, empty encoding */ numUpdates;
    void /* unknown type, empty encoding */ framesSinceLastUpdate;
    void /* unknown type, empty encoding */ framesToRecognitionFailure;
    void /* unknown type, empty encoding */ framesToRecognitionSuccess;
    void /* unknown type, empty encoding */ maxFramesSinceLastUpdate;
    void /* unknown type, empty encoding */ semaphore;
}

- (id)init;
- (void).cxx_destruct;

@end
