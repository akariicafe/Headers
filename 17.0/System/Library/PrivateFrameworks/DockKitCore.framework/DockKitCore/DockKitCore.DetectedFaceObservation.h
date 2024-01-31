@interface DockKitCore.DetectedFaceObservation : NSObject {
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ confidence;
    void /* unknown type, empty encoding */ modality;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ groupId;
    void /* unknown type, empty encoding */ allocatedLock;
    void /* unknown type, empty encoding */ _tracked;
}

@property (nonatomic) BOOL tracked;

- (id)init;
- (void).cxx_destruct;

@end
