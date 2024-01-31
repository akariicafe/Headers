@class NSString;

@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly, copy) NSString *uuidString;
@property (readonly) unsigned long long selectionType;

- (unsigned long long)hash;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUUIDString:(id)a0 selectionType:(unsigned long long)a1;
- (id)protoData;
- (id)protoPayload;

@end
