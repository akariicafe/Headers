@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage {
    BWDroppedSample *_droppedSample;
}

@property (readonly) BWDroppedSample *droppedSample;

+ (id)newMessageWithDroppedSample:(id)a0;

- (void)dealloc;

@end
