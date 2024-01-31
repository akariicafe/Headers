@class NSDateComponents;

@interface DreamworksTransRecord : DreamworksRecord

@property (nonatomic) int isIn;
@property (nonatomic) unsigned short vehicleType;
@property (nonatomic) unsigned int stationCode;
@property (retain, nonatomic) NSDateComponents *datetime;

+ (id)recordNumber:(unsigned char)a0 recordData:(id)a1 seqnum:(unsigned int)a2;

- (void).cxx_destruct;

@end
