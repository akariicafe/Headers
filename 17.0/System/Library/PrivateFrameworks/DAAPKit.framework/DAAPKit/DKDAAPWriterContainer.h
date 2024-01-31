@class NSMutableData;

@interface DKDAAPWriterContainer : NSObject

@property (readonly, nonatomic) unsigned int code;
@property (retain, nonatomic) NSMutableData *childData;

- (void).cxx_destruct;
- (id)initWithCode:(unsigned int)a0;
- (id)formattedOutputData;

@end
