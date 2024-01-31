@class AVAssetWriterInput, AVAssetReaderOutput, NSObject, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue;

@interface PFRWSampleBufferChannel : NSObject {
    id /* block */ completionHandler;
    NSObject<OS_dispatch_queue> *serializationQueue;
}

@property (nonatomic) BOOL useAdaptor;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) AVAssetReaderOutput *assetReaderOutput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)callCompletionHandlerIfNecessary;
- (id)initWithAssetReaderOutput:(id)a0 assetWriterInput:(id)a1 useAdaptor:(BOOL)a2;
- (void)startWithDelegate:(id)a0 completionHandler:(id /* block */)a1;

@end
