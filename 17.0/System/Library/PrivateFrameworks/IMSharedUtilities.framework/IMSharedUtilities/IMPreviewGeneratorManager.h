@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject

@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynamicTypes;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (Class)_previewGeneratorClassForSourceURL:(id)a0;
- (BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)a0 previewURL:(id)a1 senderContext:(id)a2 size:(out struct CGSize { double x0; double x1; } *)a3 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a4 error:(id *)a5;
- (BOOL)generateAndPersistMapPreviewFromSourceURL:(id)a0 previewURL:(id)a1 senderContext:(id)a2 size:(out struct CGSize { double x0; double x1; } *)a3 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a4 error:(id *)a5;
- (BOOL)generateAndPersistMetadataFromSourceURL:(id)a0 destinationURL:(id)a1 senderContext:(id)a2 size:(out struct CGSize { double x0; double x1; } *)a3 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a4 error:(id *)a5;
- (BOOL)generateAndPersistPreviewFromSourceURL:(id)a0 previewURL:(id)a1 senderContext:(id)a2 size:(out struct CGSize { double x0; double x1; } *)a3 balloonBundleID:(id)a4 previewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a5 error:(id *)a6;
- (BOOL)movePreviewToDiskCache:(id)a0 previewURL:(id)a1 error:(id *)a2;
- (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
- (BOOL)persistPreviewToDiskCache:(struct CGImage { } *)a0 previewURL:(id)a1 error:(id *)a2;
- (Class)previewGeneratorClassForUTIType:(id)a0;

@end
