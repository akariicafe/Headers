@interface DreamworksPurseRecord : DreamworksRecord

@property (nonatomic) unsigned char trt;
@property (nonatomic) unsigned int balance;
@property (nonatomic) unsigned int amount;
@property (nonatomic) unsigned long long idSam;
@property (nonatomic) unsigned int snSam;

+ (void)adjustRecords:(id)a0;
+ (id)recordNumber:(unsigned char)a0 recordData:(id)a1;

@end
