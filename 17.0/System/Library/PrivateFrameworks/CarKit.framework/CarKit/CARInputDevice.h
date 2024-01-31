@class NSString;

@interface CARInputDevice : NSObject

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned long long senderID;

- (void).cxx_destruct;
- (void)_setUUID:(id)a0;
- (void)_setSenderID:(unsigned long long)a0;
- (id)initWithServiceClient:(struct __IOHIDServiceClient { } *)a0 UUID:(id)a1;

@end
