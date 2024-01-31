@class NSDate;

@interface MSReadLaterTriageAction : MSTriageAction

@property (retain, nonatomic) NSDate *readLaterDate;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 readLaterDate:(id)a4;

@end
