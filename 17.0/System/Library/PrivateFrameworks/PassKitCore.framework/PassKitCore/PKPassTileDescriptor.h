@class PKPassTileMetadata, NSDictionary, NSString;

@interface PKPassTileDescriptor : NSObject

@property (retain, nonatomic) PKPassTileMetadata *metadata;
@property (copy, nonatomic) NSDictionary *states;
@property (copy, nonatomic) NSString *defaultStateIdentifier;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled;

+ (id)createWithFileURL:(id)a0;
+ (id)createWithPassDictionary:(id)a0 privateDictionary:(id)a1;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)createTileForState:(id)a0 withBundle:(id)a1 privateBundle:(id)a2;

@end
