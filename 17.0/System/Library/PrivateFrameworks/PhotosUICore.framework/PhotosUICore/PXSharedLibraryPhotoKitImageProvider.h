@class NSString, PHShareParticipant, PHPerson;

@interface PXSharedLibraryPhotoKitImageProvider : NSObject <PXSharedLibraryImageProvider> {
    long long _identifier;
    PHPerson *_person;
    PHShareParticipant *_participant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelRequestWithIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0;
- (id)initWithPerson:(id)a0;
- (void)_handleResultForRequestWithIdentifier:(long long)a0 image:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (long long)requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
