@class NSMutableData;

@interface _MLNetworkPacket : NSObject

@property (retain, nonatomic) NSMutableData *buffer;
@property (retain, nonatomic) NSMutableData *doubleBuffer;
@property (nonatomic) unsigned long long sizeOfPacket;
@property (nonatomic) unsigned long long command;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)cleanupDoubleBuffer;
- (void)resetDoubleBuffer;
- (void)resetMetadata;

@end
