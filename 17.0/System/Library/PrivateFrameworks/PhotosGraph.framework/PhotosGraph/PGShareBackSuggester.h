@class NSArray, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGShareBackSuggester : NSObject {
    NSArray *_sources;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) unsigned short positiveProcessingValue;

+ (id)momentUUIDsForExtendedUniversalDateInterval:(id)a0 suggesterInputs:(id)a1 momentFetchOptions:(id)a2;
+ (id)shareBackSuggesterForCMMWithLoggingConnection:(id)a0 photoLibrary:(id)a1 graph:(id)a2;
+ (id)shareBackSuggesterForExternalAssetProcessingWithLoggingConnection:(id)a0 photoLibrary:(id)a1 graph:(id)a2;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)a0 syndicationPhotoLibrary:(id)a1 systemPhotoLibrary:(id)a2 graph:(id)a3;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)a0 syndicationPhotoLibrary:(id)a1 systemPhotoLibrary:(id)a2 graph:(id)a3 faceIdentification:(id)a4;

- (void).cxx_destruct;
- (id)initWithSources:(id)a0 positiveProcessingValue:(unsigned short)a1 loggingConnection:(id)a2 photoLibrary:(id)a3 graph:(id)a4;
- (id)suggesterResultsForInputs:(id)a0 inGraph:(id)a1 error:(id *)a2;
- (id)suggesterResultsForUnclusteredSuggesterInputs:(id)a0 inGraph:(id)a1 error:(id *)a2;

@end
