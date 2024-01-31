@class NSString;

@interface BMSiriPostSiriEngagementFeatures : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int taskSuccess;
@property (readonly, nonatomic) BOOL isUserAbandoned;
@property (nonatomic) BOOL hasIsUserAbandoned;
@property (readonly, nonatomic) BOOL isUserCancelled;
@property (nonatomic) BOOL hasIsUserCancelled;
@property (readonly, nonatomic) BOOL isSiriCompleted;
@property (nonatomic) BOOL hasIsSiriCompleted;
@property (readonly, nonatomic) BOOL isPromptInteraction;
@property (nonatomic) BOOL hasIsPromptInteraction;
@property (readonly, nonatomic) BOOL isConfirmInteraction;
@property (nonatomic) BOOL hasIsConfirmInteraction;
@property (readonly, nonatomic) BOOL isDisambiguateInteraction;
@property (nonatomic) BOOL hasIsDisambiguateInteraction;
@property (readonly, nonatomic) BOOL isUnsupportedPromptInteraction;
@property (nonatomic) BOOL hasIsUnsupportedPromptInteraction;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithTaskSuccess:(int)a0 isUserAbandoned:(id)a1 isUserCancelled:(id)a2 isSiriCompleted:(id)a3 isPromptInteraction:(id)a4 isConfirmInteraction:(id)a5 isDisambiguateInteraction:(id)a6 isUnsupportedPromptInteraction:(id)a7;

@end
