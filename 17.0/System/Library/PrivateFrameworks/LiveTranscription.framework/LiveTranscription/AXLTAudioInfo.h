@class NSArray;

@interface AXLTAudioInfo : NSObject

@property (nonatomic) long long requestType;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSArray *audioHistogram;

- (void).cxx_destruct;
- (id)initWithAudioInfo:(id)a0 requestType:(long long)a1 pid:(int)a2;

@end
