@class NSArray, NSUUID, NSString, SIRINLURepetitionResult, SIRINLUParser;

@interface SIRINLUUserParse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSUUID *nsUUID;
@property (retain, nonatomic) NSString *parserId;
@property (retain, nonatomic) SIRINLURepetitionResult *repetitionResult;
@property (retain, nonatomic) SIRINLUParser *parser;
@property (nonatomic) double comparableProbability;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 nsUUID:(id)a2 parserId:(id)a3 repetitionResult:(id)a4 comparableProbability:(double)a5;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 nsUUID:(id)a2 parserId:(id)a3;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 nsUUID:(id)a2 parserId:(id)a3 repetitionResult:(id)a4;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 nsUUID:(id)a2 parserId:(id)a3 repetitionResult:(id)a4 parser:(id)a5 comparableProbability:(double)a6;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 parserId:(id)a2;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 parserId:(id)a2 repetitionResult:(id)a3;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 parserId:(id)a2 repetitionResult:(id)a3 parser:(id)a4;
- (id)initWithUserDialogActs:(id)a0 probability:(double)a1 parserId:(id)a2 repetitionResult:(id)a3 parser:(id)a4 comparableProbability:(double)a5;

@end
