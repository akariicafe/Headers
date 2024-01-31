@class NSData, NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject

@property (readonly, nonatomic) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void *)XPCTransportTypeAssociationKey;

- (void)_configure;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishEncoding;
- (id)initForWritingWithMessage:(id)a0;
- (void)_hh2Configure;

@end
