@class NSString, NSNumber;

@interface IDSBlastDoorMessageContext : NSObject

@property (retain, nonatomic) NSString *topic;
@property (nonatomic) BOOL isInvitationService;
@property (retain, nonatomic) NSNumber *command;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)a0 command:(id)a1;

@end
