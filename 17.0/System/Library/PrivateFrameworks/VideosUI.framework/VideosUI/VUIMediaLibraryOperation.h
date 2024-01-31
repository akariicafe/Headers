@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMediaLibrary:(id)a0;

@end
