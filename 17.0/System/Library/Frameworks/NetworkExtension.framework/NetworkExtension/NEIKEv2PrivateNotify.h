@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {
    unsigned short _notifyStatus;
    NSData *_notifyData;
}

@property (readonly, nonatomic) unsigned short notifyStatus;
@property (readonly, nonatomic) NSData *notifyData;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;

@end
