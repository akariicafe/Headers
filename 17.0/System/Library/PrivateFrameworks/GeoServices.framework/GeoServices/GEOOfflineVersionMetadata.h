@class NSString, NSDictionary;

@interface GEOOfflineVersionMetadata : NSObject <GEOXPCSerializable> {
    NSDictionary *_activeVersions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateLayerVersions:(id /* block */)a0;
- (id)initWithDataConfiguration:(id)a0;

@end
