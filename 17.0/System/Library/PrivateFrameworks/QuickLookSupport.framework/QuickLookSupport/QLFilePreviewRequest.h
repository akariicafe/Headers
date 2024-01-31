@class NSURL, UTType;

@interface QLFilePreviewRequest : NSObject

@property (retain) UTType *contentType;
@property (readonly) NSURL *fileURL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 contentType:(id)a1;

@end
