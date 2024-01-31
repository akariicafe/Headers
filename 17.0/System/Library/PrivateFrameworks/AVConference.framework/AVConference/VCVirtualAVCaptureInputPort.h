@class NSString, AVCaptureInput, VCWeakObjectHolder, NSMutableArray;

@interface VCVirtualAVCaptureInputPort : AVCaptureInputPort {
    VCWeakObjectHolder *_input;
    NSMutableArray *_connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (copy, nonatomic) NSString *mediaType;
@property (retain, nonatomic) AVCaptureInput *input;
@property (nonatomic) struct OpaqueCMClock { } *clock;

- (void)disconnect;
- (void)dealloc;
- (void)addConnection:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)connections;
- (id)initWithDevice:(id)a0 mediaType:(id)a1;

@end
