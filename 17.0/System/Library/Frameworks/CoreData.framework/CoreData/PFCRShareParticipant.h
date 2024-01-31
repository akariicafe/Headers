@class NSString, PFCRShare;

@interface PFCRShareParticipant : NSManagedObject

@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) PFCRShare *share;

@end
