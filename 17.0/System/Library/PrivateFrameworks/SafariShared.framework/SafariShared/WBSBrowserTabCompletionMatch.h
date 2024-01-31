@class NSUUID, NSString;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch

@property (nonatomic, getter=isHighlyRelevant) BOOL highlyRelevant;
@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, nonatomic) NSUUID *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *tabGroupTitle;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic, getter=isLessRelevant) BOOL lessRelevant;

- (void).cxx_destruct;
- (id)initWithTabInfo:(id)a0 userTypedString:(id)a1 forQueryID:(long long)a2;
- (id)initWithTabUUID:(id)a0 windowUUID:(id)a1 tabIndex:(unsigned long long)a2 userTypedString:(id)a3 tabURL:(id)a4 tabTitle:(id)a5 forQueryID:(long long)a6;
- (id)parsecDomainIdentifier;

@end
