@class GEOTileData, NSData, NSString;

@interface GEOTileEnumeration : NSObject <GEOXPCSerializable>

@property (retain, nonatomic) GEOTileData *data;
@property (retain, nonatomic) NSData *key;
@property (nonatomic) BOOL current;
@property (retain, nonatomic) NSString *eTag;
@property (nonatomic) unsigned char originalLoadReason;
@property (nonatomic) double age;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
