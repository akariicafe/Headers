@class MFError, NSData, NSString;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>

@property (retain, nonatomic) id<MFDAStreamingContentConsumer> streamConsumer;
@property (readonly, nonatomic) BOOL succeeded;
@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL hasLocalCopyOfData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
