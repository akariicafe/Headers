@interface SNAudioQueueConfiguration : NSObject {
    void /* unknown type, empty encoding */ configureAudioQueue;
}

@property (nonatomic) void /* unknown type, empty encoding */ creationFlags;
@property (nonatomic, copy) id /* block */ configureAudioQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCreationFlags:(unsigned int)a0 configureAudioQueue:(id /* block */)a1;

@end
