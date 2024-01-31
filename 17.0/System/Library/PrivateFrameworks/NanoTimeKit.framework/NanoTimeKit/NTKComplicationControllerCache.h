@class NSString, NSMapTable, NTKFaceCollection;

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver> {
    NSMapTable *_controllers;
    NSMapTable *_faceToControllers;
    NTKFaceCollection *_libraryCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)faceCollectionDidLoad:(id)a0;
- (void)faceConfigurationDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_purge;
- (void)_cleanupRemovedFaces;
- (void)_registerFace:(id)a0;
- (void)_removeControllersForFace:(id)a0;
- (void)_unregisterFace:(id)a0;
- (void)_updateControllersForFace:(id)a0;
- (id)controllerForComplication:(id)a0 variant:(id)a1 device:(id)a2 create:(id /* block */)a3;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollectionDidReset:(id)a0;
- (void)setLibraryCollection:(id)a0;

@end
