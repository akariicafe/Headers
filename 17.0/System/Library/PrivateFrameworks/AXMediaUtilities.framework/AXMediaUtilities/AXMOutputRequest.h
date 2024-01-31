@class NSArray, AXMOutputRequestHandle, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXMOutputRequest : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_actions;
}

@property (readonly, nonatomic) AXMOutputRequestHandle *handle;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *speechActions;
@property (readonly, nonatomic) NSArray *oneShotSoundActions;
@property (readonly, nonatomic) NSArray *activeSoundActions;
@property (readonly, nonatomic) NSArray *hapticActions;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL interruptsAndClearsQueue;

+ (id)speechItemSeparator;

- (id)init;
- (void)_addAction:(id)a0;
- (void).cxx_destruct;
- (void)addHapticItemWithURL:(id)a0 intensity:(double)a1;
- (void)addActiveSoundItemWithID:(id)a0;
- (void)addActiveSoundItemWithURL:(id)a0;
- (void)addHapticItemWithURL:(id)a0;
- (void)addSoundItemWithID:(id)a0;
- (void)addSoundItemWithURL:(id)a0;
- (void)addSpeechItem:(id)a0;

@end
