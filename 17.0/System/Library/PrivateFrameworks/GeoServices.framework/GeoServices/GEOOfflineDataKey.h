@class NSData, NSString;

@interface GEOOfflineDataKey : NSObject <NSCopying, GEOXPCSerializable>

@property (readonly, nonatomic) unsigned int layer;
@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayer:(unsigned int)a0 serviceKey:(id)a1;

@end
