@class NSString;

@interface PBFProactivePosterGalleryLayoutProvider : NSObject <PBFPosterGalleryLayoutProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchGalleryLayoutWithCompletion:(id /* block */)a0;
- (void)handlePosterDescriptorsDidChange:(id)a0 withCompletion:(id /* block */)a1;

@end
