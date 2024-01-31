@class NSData;

@interface IDSQUICConnectionIDs : NSObject

@property (nonatomic) unsigned int localAVCConnectionID;
@property (nonatomic) unsigned int localIDSConnectionID;
@property (nonatomic) unsigned int remoteAVCConnectionID;
@property (nonatomic) unsigned int remoteIDSConnectionID;
@property (nonatomic) NSData *localAVCConnectionIDData;
@property (nonatomic) NSData *localIDSConnectionIDData;
@property (nonatomic) NSData *remoteAVCConnectionIDData;
@property (nonatomic) NSData *remoteIDSConnectionIDData;

- (BOOL)isComplete;
- (id)description;
- (unsigned int)_convertConnectionIDDataToUInt32:(id)a0;
- (unsigned int)_generateUniqueQUICConnectionID:(unsigned int)a0 usedLocalConnectionIDs:(id *)a1;
- (id)_getConnectionIDData:(unsigned int)a0;
- (id)_getConnectionIDDispatchData:(unsigned int)a0;
- (id)generateLocalIDs:(id *)a0;
- (id)localAVCConnectionIDDispatchData;
- (id)localIDSConnectionIDDispatchData;
- (id)remoteAVCConnectionIDDispatchData;
- (id)remoteIDSConnectionIDDispatchData;

@end
