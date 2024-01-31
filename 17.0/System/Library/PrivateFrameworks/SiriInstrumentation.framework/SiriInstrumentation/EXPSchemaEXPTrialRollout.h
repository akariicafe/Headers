@class NSString, NSArray, NSData;

@interface EXPSchemaEXPTrialRollout : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; unsigned char status : 1; } _has;
}

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) BOOL hasRampId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearNamespaces;
- (unsigned long long)namespacesCount;
- (void)deleteRolloutId;
- (void)addNamespaces:(id)a0;
- (void)deleteDeploymentId;
- (void)deleteNamespaces;
- (void)deleteRampId;
- (void)deleteStatus;
- (id)namespacesAtIndex:(unsigned long long)a0;

@end
