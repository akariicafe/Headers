@class NSCountedSet, NSMapTable, NSString;

@interface _PBFPosterSnapshotDefinitionCollection : NSObject <BSCancellable>

@property (readonly, nonatomic) NSMapTable *previewImageRequestForDisplayContext;
@property (readonly, nonatomic) NSMapTable *receivedPreviewImageForDisplayContext;
@property (readonly, nonatomic) NSMapTable *failedPreviewImageForDisplayContext;
@property (readonly, nonatomic) NSCountedSet *displayContextRequestFailures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
