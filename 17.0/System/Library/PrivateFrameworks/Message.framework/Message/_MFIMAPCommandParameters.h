@class NSArray, NSMutableArray, MFIMAPResponseConsumer;

@interface _MFIMAPCommandParameters : NSObject

@property (nonatomic) int command;
@property (retain, nonatomic) NSArray *arguments;
@property (retain, nonatomic) NSMutableArray *untaggedResponses;
@property (nonatomic) unsigned long long sequenceNumber;
@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer;

- (id)initWithCommand:(int)a0 arguments:(id)a1;
- (id)initWithCommand:(int)a0 sequenceNumber:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithCommand:(int)a0;

@end
