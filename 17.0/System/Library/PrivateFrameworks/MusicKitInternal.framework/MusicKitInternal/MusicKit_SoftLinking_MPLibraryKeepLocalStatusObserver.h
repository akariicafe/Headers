@class MPLibraryKeepLocalStatusObserver, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver : NSObject {
    MPLibraryKeepLocalStatusObserver *_underlyingLibraryKeepLocalStatusObserver;
}

@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject;
@property (readonly, nonatomic) struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x0; unsigned long long x1; double x2; } currentStatus;
@property (copy, nonatomic) id /* block */ statusBlock;

- (void).cxx_destruct;
- (id)initWithIdentifyingModelObject:(id)a0;
- (struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x0; unsigned long long x1; double x2; })_activeKeepLocalStatusFromUnderlyingStatus:(struct MPLibraryActiveKeepLocalStatus { long long x0; double x1; })a0 underlyingDownloadPauseReasons:(unsigned long long)a1;
- (void)_handleUpdatedUnderlyingActiveKeepLocalStatus:(struct MPLibraryActiveKeepLocalStatus { long long x0; double x1; })a0;
- (void)calculateDownloadProgressWithChildren:(id)a0;

@end
