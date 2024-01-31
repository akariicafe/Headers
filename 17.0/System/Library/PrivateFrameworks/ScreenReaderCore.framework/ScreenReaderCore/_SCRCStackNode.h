@interface _SCRCStackNode : NSObject

@property (retain, nonatomic) id object;
@property (weak, nonatomic) _SCRCStackNode *prev;
@property (retain, nonatomic) _SCRCStackNode *next;

- (void).cxx_destruct;

@end
