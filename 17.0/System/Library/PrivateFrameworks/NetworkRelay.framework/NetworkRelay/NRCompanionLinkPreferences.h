@interface NRCompanionLinkPreferences : NRLinkPreferences {
    BOOL _highThroughput;
    BOOL _includeP2P;
    unsigned char _serviceClass;
    unsigned long long _identifier;
}

@property (readonly, nonatomic) BOOL highThroughput;
@property (readonly, nonatomic) BOOL includeP2P;
@property (readonly, nonatomic) unsigned char serviceClass;

- (id)initWithServiceClass:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyShortDescription;
- (id)copyLongDescription;
- (id)initForHighThroughputWithServiceClass:(unsigned char)a0 includeP2P:(BOOL)a1;
- (id)initInternalWithServiceClass:(unsigned char)a0 highThroughout:(BOOL)a1 includeP2P:(BOOL)a2;

@end
