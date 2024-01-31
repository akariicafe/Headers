@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolPageFrame *frame;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSArray *childFrames;

- (id)initWithFrame:(id)a0 resources:(id)a1;

@end
