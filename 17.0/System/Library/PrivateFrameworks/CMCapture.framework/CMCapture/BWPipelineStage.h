@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_group> *_executionGroup;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int priority;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL stillImagePipelineStage;

+ (id)pipelineStageForStillImagesWithName:(id)a0 priority:(unsigned int)a1;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 workgroup:(id)a2;
+ (void)initialize;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 workgroup:(id)a2 discardsLateSampleData:(BOOL)a3;
+ (id)pipelineStageWithName:(id)a0 priority:(unsigned int)a1 discardsLateSampleData:(BOOL)a2;

- (void)dealloc;
- (id)description;
- (void)sendMessage:(id)a0 toInput:(id)a1;
- (void)sendMessagesToInput:(id)a0 messageProvider:(id /* block */)a1;

@end
