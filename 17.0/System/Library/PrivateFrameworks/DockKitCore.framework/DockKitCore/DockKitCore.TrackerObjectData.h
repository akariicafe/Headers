@interface DockKitCore.TrackerObjectData : NSObject {
    void /* unknown type, empty encoding */ tracks;
    void /* unknown type, empty encoding */ facePoint;
    void /* unknown type, empty encoding */ bodyPoint;
    void /* unknown type, empty encoding */ faceBox;
    void /* unknown type, empty encoding */ bodyBox;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ pitch;
    void /* unknown type, empty encoding */ numFaces;
    void /* unknown type, empty encoding */ numBodies;
}

- (id)init;
- (void).cxx_destruct;

@end
