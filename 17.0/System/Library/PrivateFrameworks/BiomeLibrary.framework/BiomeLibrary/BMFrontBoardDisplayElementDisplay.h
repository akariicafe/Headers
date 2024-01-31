@class NSString, NSArray;

@interface BMFrontBoardDisplayElementDisplay : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *hardwareIdentifier;
@property (readonly, nonatomic) int interfaceOrientation;
@property (readonly, nonatomic) int backlightStatus;
@property (readonly, nonatomic) NSArray *transitionReasons;
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
- (id)_transitionReasonsJSONArray;
- (id)initWithType:(int)a0 name:(id)a1 deviceName:(id)a2 hardwareIdentifier:(id)a3 interfaceOrientation:(int)a4 backlightStatus:(int)a5 transitionReasons:(id)a6;

@end
