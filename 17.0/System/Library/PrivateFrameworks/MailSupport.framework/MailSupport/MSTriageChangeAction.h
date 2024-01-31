@class NSIndexSet, NSString, NSDate;

@interface MSTriageChangeAction : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL flagState;
@property (readonly, nonatomic) NSIndexSet *flagColors;
@property (readonly, nonatomic) NSDate *readLaterDate;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChangeAction:(long long)a0 flagState:(BOOL)a1;
- (id)initWithChangeAction:(long long)a0 flagState:(BOOL)a1 flagColors:(id)a2;
- (id)initWithChangeAction:(long long)a0 flagState:(BOOL)a1 flagColors:(id)a2 readLaterDate:(id)a3;
- (id)initWithChangeAction:(long long)a0 flagState:(BOOL)a1 readLaterDate:(id)a2;

@end
