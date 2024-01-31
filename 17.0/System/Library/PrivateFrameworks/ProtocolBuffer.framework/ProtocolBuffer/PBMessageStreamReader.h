@class NSInputStream;

@interface PBMessageStreamReader : NSObject {
    NSInputStream *_stream;
}

@property (nonatomic) Class classOfNextMessage;
@property (readonly, nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)initWithStream:(id)a0;
- (id)nextMessage;

@end
