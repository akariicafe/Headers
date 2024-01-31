@class NSArray;

@interface NTKFacesArrayGalleryCollection : NTKGalleryCollection {
    NSArray *_faces;
}

- (id)faceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfFaces;
- (void).cxx_destruct;
- (void)setFaces:(id)a0;
- (unsigned long long)indexOfFace:(id)a0;

@end
