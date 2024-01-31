@class NSData;

@interface DreamworksRecord : NSObject

@property (nonatomic) unsigned char sfi;
@property (nonatomic) unsigned char number;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int seqnum;

- (void).cxx_destruct;

@end
