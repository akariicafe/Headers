@class NSArray;

@interface RKConversation : NSObject

@property (readonly) unsigned long long type;
@property (readonly, copy) NSArray *messages;

- (void).cxx_destruct;
- (id)initWithString:(unsigned long long)a0 messages:(id)a1;

@end
