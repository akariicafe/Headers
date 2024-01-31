@class MPLibraryAddStatusObserver, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPLibraryAddStatusObserver : NSObject {
    MPLibraryAddStatusObserver *_underlyingLibraryAddStatusObserver;
}

@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject;
@property (readonly, nonatomic) long long currentStatus;
@property (copy, nonatomic) id /* block */ statusBlock;

- (void).cxx_destruct;
- (id)initWithIdentifyingModelObject:(id)a0;
- (void)_handleUpdatedUnderlyingLibraryAddStatus:(long long)a0;
- (long long)_libraryAddStatusFromUnderlyingStatus:(long long)a0;

@end
