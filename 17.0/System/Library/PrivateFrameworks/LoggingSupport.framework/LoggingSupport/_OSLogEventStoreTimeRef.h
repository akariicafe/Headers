@interface _OSLogEventStoreTimeRef : NSObject {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) const char *UUID;
@property (readonly, nonatomic) unsigned long long continuousTime;

+ (id)timeRef;

- (id)initWithDictionary:(id)a0;
- (id)initWithUUID:(unsigned char[16])a0 continuous:(unsigned long long)a1;

@end
