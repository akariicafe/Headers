@class NSString;

@interface BMSensitiveContentAnalysisUIInteraction : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int interactionType;
@property (readonly, nonatomic) int ageGroup;
@property (readonly, nonatomic) int eventDirection;
@property (readonly, nonatomic) int screen;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *trackingVersion;
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
- (id)initWithInteractionType:(int)a0 ageGroup:(int)a1 eventDirection:(int)a2 screen:(int)a3 action:(int)a4 contentType:(int)a5 clientBundleID:(id)a6 trackingVersion:(id)a7;

@end
