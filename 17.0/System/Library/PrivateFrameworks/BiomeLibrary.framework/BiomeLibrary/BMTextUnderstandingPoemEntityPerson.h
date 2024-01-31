@class NSString;

@interface BMTextUnderstandingPoemEntityPerson : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *contactHandle;
@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) NSString *mdIdentifier;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 contactHandle:(id)a1 visualIdentifier:(id)a2 mdIdentifier:(id)a3;

@end
