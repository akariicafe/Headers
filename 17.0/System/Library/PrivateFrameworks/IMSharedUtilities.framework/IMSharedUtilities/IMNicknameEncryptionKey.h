@class NSData;

@interface IMNicknameEncryptionKey : NSObject

@property (retain, nonatomic) NSData *data;
@property (readonly) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
