@class NSDate;

@interface MRCompanionLinkClientRequest : MRCompanionLinkClientEvent

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
