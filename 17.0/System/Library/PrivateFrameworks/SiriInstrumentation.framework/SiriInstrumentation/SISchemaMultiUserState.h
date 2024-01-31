@class NSArray, NSData;

@interface SISchemaMultiUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *enrolledUsers;
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
- (void)addEnrolledUsers:(id)a0;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (id)enrolledUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)enrolledUsersCount;

@end
