@class NSString;

@interface BMAudioRoute : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL external;
@property (nonatomic) BOOL hasExternal;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) int routeChangeReason;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)initWithExternal:(id)a0 identifier:(id)a1 portType:(id)a2 portName:(id)a3 routeChangeReason:(int)a4 type:(int)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
