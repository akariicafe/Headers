@class ICSDateTimeValue;

@interface ICSAlternateTimeProposal : ICSProperty

@property (retain, nonatomic) ICSDateTimeValue *startDate;
@property (nonatomic) int status;

+ (id)ICSStringFromAlternateTimeProposalStatus:(int)a0;
+ (id)_parseICSString:(id)a0;
+ (id)alternateTimeProposalFromICSCString:(id)a0;
+ (int)statusFromICSString:(id)a0;

- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
