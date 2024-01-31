@class NSNumber, NSString, NSData;

@interface MTRThreadOperationalDataset : NSObject

@property (nonatomic) unsigned short channel;
@property (readonly) struct OperationalDataset { unsigned char mData[254]; unsigned char mLength; } cppThreadOperationalDataset;
@property (copy, nonatomic) NSNumber *channelNumber;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (readonly, copy, nonatomic) NSData *extendedPANID;
@property (readonly, copy, nonatomic) NSData *masterKey;
@property (readonly, copy, nonatomic) NSData *PSKc;
@property (readonly, copy, nonatomic) NSData *panID;

- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 masterKey:(id)a2 PSKc:(id)a3 channel:(unsigned short)a4 panID:(id)a5;
- (BOOL)_checkDataLength:(id)a0 expectedLength:(unsigned long long)a1;
- (BOOL)_populateCppOperationalDataset;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 masterKey:(id)a2 PSKc:(id)a3 channelNumber:(id)a4 panID:(id)a5;

@end
