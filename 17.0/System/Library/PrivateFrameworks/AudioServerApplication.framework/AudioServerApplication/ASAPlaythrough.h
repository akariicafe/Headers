@class NSArray, NSString, ASAAudioDevice;

@interface ASAPlaythrough : NSObject {
    void /* function */ *_procID;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float *x4; struct OpaqueAudioConverter **x5; struct OpaqueAudioConverter **x6; struct AudioBufferList **x7; struct AudioBufferList **x8; struct AudioBufferList **x9; struct AudioBufferList *x10; } *_ioContext;
    NSArray *_channelMapping;
    unsigned int _aggregateID;
    NSString *_aggregateUID;
}

@property (retain) ASAAudioDevice *audioDevice;
@property BOOL playing;

- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (void).cxx_destruct;
- (void)_freeIOContext:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float *x4; struct OpaqueAudioConverter **x5; struct OpaqueAudioConverter **x6; struct AudioBufferList **x7; struct AudioBufferList **x8; struct AudioBufferList **x9; struct AudioBufferList *x10; } *)a0;
- (void)_createIOContext;
- (void)_destroyIOContext;
- (id)initWithDevice:(id)a0 usingChannelMapping:(id)a1;
- (id)initWithDevices:(id)a0 usingMainDevice:(id)a1 andClockDevice:(id)a2 withName:(id)a3 isPrivate:(BOOL)a4 usingChannelMapping:(id)a5;
- (id)initWithDevices:(id)a0 usingMainDevice:(id)a1 andClockDeviceUID:(id)a2 withName:(id)a3 isPrivate:(BOOL)a4 usingChannelMapping:(id)a5;
- (id)initWithDevices:(id)a0 usingMasterDevice:(id)a1 andClockDevice:(id)a2 withName:(id)a3 isPrivate:(BOOL)a4 usingChannelMapping:(id)a5;
- (id)initWithDevices:(id)a0 usingMasterDevice:(id)a1 andClockDeviceUID:(id)a2 withName:(id)a3 isPrivate:(BOOL)a4 usingChannelMapping:(id)a5;

@end
