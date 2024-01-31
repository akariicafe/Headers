@class MTIDScheme;

@interface MTHashAction : MTTreatmentAction

@property (retain, nonatomic) MTIDScheme *scheme;

- (void).cxx_destruct;
- (id)hashOf:(id)a0 userId:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;
- (id)initWithField:(id)a0 configDictionary:(id)a1;

@end
