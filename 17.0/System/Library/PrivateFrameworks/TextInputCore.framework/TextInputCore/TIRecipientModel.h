@class NSString, RKMessageResponseManager;
@protocol TILinguisticDataSourceMessage;

@interface TIRecipientModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) RKMessageResponseManager *trainer;
@property (retain, nonatomic) id<TILinguisticDataSourceMessage> lastMessage;

- (void).cxx_destruct;
- (void)handleMessages:(id)a0;
- (id)initWithCompositeName:(id)a0 andTrainer:(id)a1;
- (id)languageGuessForString:(id)a0;

@end
