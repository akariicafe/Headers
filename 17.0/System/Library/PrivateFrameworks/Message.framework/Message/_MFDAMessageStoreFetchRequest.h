@class MFMessage, MFMimePart, MFDAMessageStore;
@protocol MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    id<MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
    MFMimePart *part;
    int format;
    BOOL partial;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)generationNumber;

@end
