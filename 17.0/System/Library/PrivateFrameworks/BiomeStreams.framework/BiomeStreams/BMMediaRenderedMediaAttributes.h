@class NSString;

@interface BMMediaRenderedMediaAttributes : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithUUID:(id)a0;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
