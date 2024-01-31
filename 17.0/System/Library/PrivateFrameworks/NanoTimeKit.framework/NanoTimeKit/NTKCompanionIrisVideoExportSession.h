@class AVAsset, NSURL, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface NTKCompanionIrisVideoExportSession : NSObject {
    NSObject<OS_dispatch_queue> *_exportQueue;
    NSObject<OS_dispatch_queue> *_encodeQueue;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (readonly, nonatomic) AVAsset *video;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) unsigned long long bitrate;
@property (readonly, nonatomic) NSURL *outputURL;

- (void).cxx_destruct;
- (id)_makeReader;
- (id)_makeWriter;
- (void)exportAsynchronouslyWithCompletion:(id /* block */)a0;
- (id)initWithVideo:(id)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 bitrate:(unsigned long long)a3 outputURL:(id)a4;

@end
